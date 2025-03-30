#include "calculator.h"
#include <ctime>
#include <iostream>
using namespace std;

Calculator::Calculator(int x, int y) : x(x), y(y) {}

//getter functions:
int Calculator::getX()
{
    return x;
}
int Calculator::getY()
{
    return y;
}

//addition of two numbers:
int Calculator::addNums(int x, int y)
{
    return x + y;
}

//subtraction of two numbers:
int Calculator::subtractNums(int x, int y)
{
    return x - y;
}

//multiplication of two numbers:
int Calculator::multiplyNums(int x, int y)
{
    return x * y;
}

//division of two numbers:
float Calculator::divideNums(float x, float y)
{
    return x / y;
}

//factorial calculation:
int Calculator::factorial(int x)
{
    if (x == 1 || x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}

//GCD calculation:
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

//LCM calculation:
int Calculator::lcm(int x, int y)
{
    if (x == 0 || y == 0)
        return 0;
    return (x * y) / gcd(x, y);
}

//random number generation:
int Calculator::random(int rangelim1, int rangelim2)
{
    srand(time(0));
    
    int low = min(rangelim1, rangelim2);
    int high = max(rangelim1, rangelim2);

    return rand() % (high - low + 1) + low;
}