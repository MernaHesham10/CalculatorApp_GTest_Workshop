#include "pch.h"
#include <gtest/gtest.h>
#include "E:\Workshops\GTest\Calculator\CalculatorTestSuite\Calculator.h"
#include <tuple>

TEST(CalculatorDisabledTest, DISABLED_OldTest) {
    // This test won't run unless explicitly enabled
    Calculator calc;
    EXPECT_EQ(0, calc.Add(0, 0));
}