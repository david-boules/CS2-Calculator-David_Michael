# CSCE 1102 - Calculator Library

This mini project is a simple calculator library built in C++ for an assignment for the CSCE 1102 - Fundamentals of Computing II Lab course. It supports a variety of mathematical operations, including arithmetic, factorial, GCD, LCM, and random number generation.

## Purpose

The goal of this mini project is to showcase understanding and practical usage of version control systems and build processes for computing projects.

## Structure
- `calculator.h`: Header file with function declarations
- `calculator.cpp`: Implementation of calculator functions
- `main.cpp`: Command-line interface to interact with the calculator
- `test.cpp`: A tester program that showcases all functionalities
- `CMakeLists.txt`: CMake configuration for building the project

## How to Build and Run

You have two options:

### 1. Using CMake
(This step assumes you have cmake and make installed, created a `CMakeLists.txt` file defined with the necessary source files and you have named the executable file appropriately)

In your terminal, navigate to the directory where the source files are located and run the following commands:
  
```bash
mkdir build
cd build
cmake ..
make
```

To run the program:
```bash
./calc
```
(calc is the name of the executable file in this instance)

### 2. Using g++
(Make sure you have g++ installed)

In your terminal, navigate to the directory where the source files are located and run the following commands:

```bash
g++ calculator.cpp main.cpp -o calc
```
(replace `main.cpp` with `test.cpp` if you wish to run the test file instead)

  To run the program:
  ```bash
  ./calc
  ```

## How to use the Calculator
### `test.cpp`
You will be prompted to input two numbers, and the test file will run through all the available calculator operations on those two numbers (with the exception of the factorial operation, since large numbers may cause the program to crash)

### `main.cpp`
You will see a list of operations (1-9) to choose from. For operations 1-8, just input the corresponding number in the table below and then you will be asked to input the numbers for said calculation. For 'operation 9' ('string expression evaluation') you simply type out the expression you would like to evaluate, such as: 3 + 4 * (2-1) / 5, and it will be evaluated.

The calculator supports the following operations:

| Operation | Description                         | Input Type        |
|-----------|-------------------------------------|-------------------|
| 1         | Addition                            | Two integers      |
| 2         | Subtraction                         | Two integers      |
| 3         | Multiplication                      | Two integers      |
| 4         | Division                            | Two floats        |
| 5         | Factorial                           | One integer       |
| 6         | Greatest Common Divisor (GCD)       | Two integers      |
| 7         | Least Common Multiple (LCM)         | Two integers      |
| 8         | Random Number (within a range)      | Two integers      |
| 9         | String Expression Evaluation (Bonus)| Mathematical expression |

Type `exit` at any time to end the session.

## Authors

- David Boules
- Michael Ayad
