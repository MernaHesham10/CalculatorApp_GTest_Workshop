#include "pch.h"
#include <gtest/gtest.h>
#include "../CalculatorTestSuite/Calculator.h"

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc; // Reused across tests

    void SetUp() override {
        // Optional: Initialize resources
    }

    void TearDown() override {
        // Optional: Cleanup
    }
};

static TEST_F(CalculatorTest, FixtureTests_MultiplyTest_TC1) {
    EXPECT_EQ(6, calc.Multiply(2, 3));
}

static TEST_F(CalculatorTest, FixtureTests_SubtractTest_TC2) {
    EXPECT_EQ(-1, calc.Subtract(2, 3));
}