#include "pch.h"
#include <gtest/gtest.h>
#include "../CalculatorTestSuite/Calculator.h"

TEST(CalculatorTests, Add_PositiveNumbers_ReturnsCorrectSum) {
    Calculator calc;
    EXPECT_EQ(calc.Add(2, 3), 5);
}

TEST(CalculatorTests, Add_NegativeAndPositive_ReturnsCorrectSum) {
    Calculator calc;
    ASSERT_EQ(calc.Add(-1, 1), 0);
}

TEST(CalculatorTests, Add_AnotherPositivePair_ReturnsCorrectSum) {
    Calculator calc;
    EXPECT_EQ(5, calc.Add(2, 3));
    ASSERT_EQ(10, calc.Add(5, 5));
}

TEST(CalculatorTests, Divide_NormalCase_ReturnsCorrectResult) {
    Calculator calc;
    EXPECT_DOUBLE_EQ(2.5, calc.Divide(5, 2));
}