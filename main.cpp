#include "calculator.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << endl;
    cout << "This is your Calculator!" << endl;
    cout << "Type 'exit' to stop." << endl;
    cout << endl;

    cout << "Type the following for your desired calculation:" << endl;
    cout << "For Addition, type 1" << endl;
    cout << "For Subtraction, type 2" << endl;
    cout << "For Multiplication, type 3" << endl;
    cout << "For Division, type 4" << endl;
    cout << "For Factorial, type 5" << endl;
    cout << "For GCD (Greatest Common Divisor), type 6" << endl;
    cout << "For LCM (Least Common Multiple), type 7" << endl;
    cout << "For a Random number between two bounds, type 8" << endl;
    cout << "For a string expression evaluation, type 9" << endl;
    cout << endl;

    bool session;
    session = true;
    string expression = " ";
    do
    {
        cout << "What operation would you like to perform? ";
        string operation;
        cin >> operation;

        if (operation == "exit")
        {
            session = false;
            break;
        }

        try
        {
            int int_operation = stoi(operation); // converts string input into an integer for switching

            Calculator MyCalc(0, 0);

            switch (int_operation)
            {
            case 1:
            { // Addition
                cout << "Enter the first number: ";
                int a;
                cin >> a;

                cout << "Enter the second number: ";
                int b;
                cin >> b;

                cout << a << " + " << b << " = " << MyCalc.addNums(a, b) << endl;
                break;
            }
            case 2:
            { // Subtraction
                cout << "Enter the first number: ";
                int a;
                cin >> a;

                cout << "Enter the second number: ";
                int b;
                cin >> b;

                cout << a << " - " << b << " = " << MyCalc.subtractNums(a, b) << endl;
                break;
            }
            case 3:
            { // Multiplication
                cout << "Enter the first number: ";
                int a;
                cin >> a;

                cout << "Enter the second number: ";
                int b;
                cin >> b;

                cout << a << " * " << b << " = " << MyCalc.multiplyNums(a, b) << endl;
                break;
            }
            case 4:
            { // Division
                cout << "Enter the first number: ";
                int a;
                cin >> a;

                cout << "Enter the second number: ";
                int b;
                cin >> b;

                cout << a << " / " << b << " = " << MyCalc.divideNums(a, b) << endl;
                break;
            }
            case 5:
            { // Factorial
                cout << "Enter a number: ";
                int n;
                cin >> n;

                cout << n << "! = " << MyCalc.factorial(n) << endl;
                break;
            }
            case 6:
            { // GCD
                cout << "Enter the first number: ";
                int a;
                cin >> a;

                cout << "Enter the second number: ";
                int b;
                cin >> b;

                cout << "GCD(" << a << ", " << b << ") = " << MyCalc.gcd(a, b) << endl;
                break;
            }
            case 7:
            { // LCM
                cout << "Enter the first number: ";
                int a;
                cin >> a;

                cout << "Enter the second number: ";
                int b;
                cin >> b;

                cout << "LCM(" << a << ", " << b << ") = " << MyCalc.lcm(a, b) << endl;
                break;
            }
            case 8:
            { // Random number
                cout << "Enter the lower bound: ";
                int a;
                cin >> a;

                cout << "Enter the upper bound: ";
                int b;
                cin >> b;

                cout << "Random number between " << a << " and " << b << ": " << MyCalc.random(a, b) << endl;
                break;
            }
            case 9:
            {
                cout << "Enter your expression as a string: \n"
                     << "i.e: 2*9/(2+3)";
                cin >> expression;
                cout << "The result of your expression is: " << MyCalc.algorithm(expression) << endl;
            }
            default:
                cout << "Invalid input. Please enter a number from 1 to 9." << endl;
            }

            cout << endl;
        }
        catch (invalid_argument const &e) // catches invalid inputs, handling cases where a user may input 'addition' instead of its corresponding number, ensuring the program does not crash
        {
            cout << "Invalid input. Please enter a number from 1 to 8 or type 'exit' to quit." << endl;
        }

    } while (session);

    cout << "Session ended." << endl;

    return 0;
}