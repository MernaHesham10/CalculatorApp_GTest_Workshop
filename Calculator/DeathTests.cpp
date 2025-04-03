#include "pch.h"
#include <gtest/gtest.h>
#include "E:\Workshops\GTest\Calculator\CalculatorTestSuite\Calculator.h"

TEST(CalculatorDeathTest, DivideByZero) {
    Calculator calc;
    EXPECT_DEATH(calc.Divide(5, 0), "Division by zero!"); // Checks if the program crashes with the expected error
    //EXPECT_THROW(calc.Divide(5, 0), std::runtime_error);  // Use EXPECT_THROW instead of EXPECT_DEATH

}