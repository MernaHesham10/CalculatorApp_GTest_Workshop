#include "pch.h"
#include <gtest/gtest.h>
#include "E:\Workshops\GTest\Calculator\CalculatorTestSuite\Calculator.h"

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

TEST_F(CalculatorTest, BasicTests_AddTest_TC1) {
    EXPECT_EQ(calc.Add(2, 3), 5);    // Non-fatal assertion
    ASSERT_EQ(calc.Add(-1, 1), 0);   // Fatal assertion
}

TEST_F(CalculatorTest, BasicTests_AddTests_TC2) {
    EXPECT_EQ(5, calc.Add(2, 3));  // EXPECT_EQ for non-fatal assertions
    ASSERT_EQ(10, calc.Add(5, 5)); // ASSERT_EQ for fatal assertions
}

TEST_F(CalculatorTest, BasicTests_DivideTests_TC3) {
    EXPECT_DOUBLE_EQ(2.5, calc.Divide(5, 2)); // Floating-point comparison
}