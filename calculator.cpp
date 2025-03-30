#include "calculator.h"
#include <ctime>
#include <iostream>
using namespace std;
Calculator::Calculator(int x, int y) : x(x), y(y) {}
int Calculator::addNums(int x, int y)
{
    return x + y;
}
int Calculator::subtractNums(int x, int y)
{
    return x - y;
}
int Calculator::multiplyNums(int x, int y)
{
    return x * y;
}
float Calculator::divideNums(float x, float y)
{
    return x / y;
}
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
int Calculator::lcm(int x, int y)
{
    if (x == 0 || y == 0)
        return 0;
    return (x * y) / gcd(x, y);
}
int Calculator::factorial(int x)
{
    if (x == 1 || x == 0)
        return 1;
    else
        return x * factorial(x - 1);
}
int Calculator::random(int rangelim1, int rangelim2)
{
    srand(0);
    return rand() % rangelim2 + rangelim1;
}