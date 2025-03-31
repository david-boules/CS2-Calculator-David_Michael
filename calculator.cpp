#include "calculator.h"
#include <ctime>
#include <stack>
#include <iostream>
using namespace std;

Calculator::Calculator(int x, int y) : x(x), y(y) {}

// getter functions:
int Calculator::getX()
{
    return x;
}
int Calculator::getY()
{
    return y;
}

// addition of two numbers:
int Calculator::addNums(int x, int y)
{
    return x + y;
}

// subtraction of two numbers:
int Calculator::subtractNums(int x, int y)
{
    return x - y;
}

// multiplication of two numbers:
int Calculator::multiplyNums(int x, int y)
{
    return x * y;
}

// division of two numbers:
float Calculator::divideNums(float x, float y)
{
    if (y == 0.0)
    {
        cout << "Error! Cannot divide by 0." << endl;
        exit(1); // just like in a normal calculator, the session must restart if division by zero is attempted
    }
    else
    {
        return x / y;
    }
}

// factorial calculation:
int Calculator::factorial(int x)
{
    if (x == 1 || x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}

// GCD calculation:
int Calculator::gcd(int x, int y)
{
    int z = (x < y) ? x : y;
    while (z > 0)
    {
        if (x % z == 0 && y % z == 0)
            return z;
        z--;
    }
    return 1;
}

// LCM calculation:
int Calculator::lcm(int x, int y)
{
    if (x == 0 || y == 0)
        return 0;
    return (x * y) / gcd(x, y);
}

// random number generation:
int Calculator::random(int rangelim1, int rangelim2)
{
    srand(time(0));

    int low = min(rangelim1, rangelim2);
    int high = max(rangelim1, rangelim2);

    return rand() % (high - low + 1) + low;
}
static int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}
static float applyOP(int a, int b, char op)
{
    if (op == '+')
        return a + b;
    if (op == '-')
        return a - b;
    if (op == '*')
        return a * b;
    if (op == '/')
        return a / b;
}
float Calculator::algorithm(string tokens)
{
    stack<char> ops;
    stack<int> values;
    int i;
    for (i = 0; i < tokens.length(); i++)
        if (tokens[i] == ' ')
            continue;
        else if (tokens[i] == '(')
        {
            ops.push(tokens[i]);
        }
        else if (isdigit(tokens[i]))
        {
            int val = 0;
            while (isdigit(tokens[i]) && i < tokens.length())
            {
                val = (val * 10) + (tokens[i] - '0');
                i++;
            }
            values.push(val);
            i--;
        }
        else if (tokens[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                int val2 = values.top();
                values.pop();
                int val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOP(val1, val2, op));
            }
            if (!ops.empty())
                ops.pop();
        }
        else
        {
            while (!ops.empty() && precedence(ops.top() >= precedence(tokens[i])))
            {
                int val2 = values.top();
                values.pop();
                int val1 = values.top();
                values.pop();
                char op = ops.top();
                ops.pop();
                values.push(applyOP(val1, val2, op));
            }
            ops.push(tokens[i]);
        }
    while (!ops.empty())
    {
        int val2 = values.top();
        values.pop();
        int val1 = values.top();
        values.pop();
        char op = ops.top();
        ops.pop();
        values.push(applyOP(val1, val2, op));
    }
    return values.top();
}