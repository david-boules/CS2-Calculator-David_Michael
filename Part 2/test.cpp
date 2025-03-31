#include "calculator.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "Please Enter Two Numbers to get Started " << endl;
    cout << endl;
    
    cout << "Enter the First Number: ";
    int x;
    cin >> x;
    cout << endl;

    cout << "Enter the Second Number: ";
    int y;
    cin >> y;
    cout << endl;
    
    Calculator MyCalc(x,y);

    // Testing addNums
    cout << MyCalc.getX() << "+" << MyCalc.getY() << "=" << MyCalc.addNums(x,y) << endl;

    // Testing subtractNums
    cout << MyCalc.getX() << "-" << MyCalc.getY() << "=" << MyCalc.subtractNums(x,y) << endl;

    // Testing multiplyNums
    cout << MyCalc.getX() << "*" << MyCalc.getY() << "=" << MyCalc.multiplyNums(x,y) << endl;

    // Testing divideNums
    cout << MyCalc.getX() << "÷" << MyCalc.getY() << "=" << MyCalc.divideNums(x,y) << endl;

    //Testing factorial
    cout << "5! = " << MyCalc.factorial(5) << endl;

    // Testing gcd
    cout << "The GCD of " << MyCalc.getX() << " and " << MyCalc.getY() << " is " << MyCalc.gcd(x,y) << endl;

    // Testing lcm
    cout << "The LCM of " << MyCalc.getX() << " and " << MyCalc.getY() << " is " << MyCalc.lcm(x,y) << endl;

    // Testing random
    cout << "Random number generated beteween " << MyCalc.getX() << " and " << MyCalc.getY() << ": " << MyCalc.random(x,y) << endl;

    return 0;
}
