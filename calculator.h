#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <iostream>
#include <string>
using namespace std;
class Calculator
{
private:
      int x;
      int y;

public:
      Calculator(int x, int y);
      int getX();
      int getY();
      int addNums(int x, int y);
      int subtractNums(int x, int y);
      int multiplyNums(int x, int y);
      float divideNums(float x, float y);
      int factorial(int x);
      int gcd(int x, int y);
      int lcm(int x, int y);
      int random(int rangelim1, int rangelim2);
      int algorithm(string tokens);
};
#endif