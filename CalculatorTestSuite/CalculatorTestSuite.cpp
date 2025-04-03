// CalculatorTestSuite.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"

int main()
{
    std::cout << "Hello World!\n";

    Calculator calc;
    int a = 2;
    int b = 3;

    std::cout << calc.Add(2, 3);
    std::cout << calc.Subtract(a,  b);
    std::cout << calc.Multiply(a,  b);
    std::cout << calc.Divide(a,  b);
    std::cout << calc.IsPrime(12);
}