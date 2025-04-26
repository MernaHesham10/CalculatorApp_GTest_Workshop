#include "pch.h"
#include <gtest/gtest.h>
#include "../CalculatorTestSuite/Calculator.h"

TEST(CalculatorDeathTest, DivideByZero) {
    Calculator calc;
    
    // Checks if the program crashes with the expected error
    EXPECT_DEATH(calc.Divide(5, 0), "Division by zero!"); 
    
    // Use EXPECT_THROW instead of EXPECT_DEATH
    //EXPECT_THROW(calc.Divide(5, 0), std::runtime_error);  
}