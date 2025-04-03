#include "pch.h"
#include <gtest/gtest.h>
#include "E:\Workshops\GTest\Calculator\CalculatorTestSuite\Calculator.h"

struct TestInput {
    int a, b;
    int expected;
};

class ParameterizedCalculatorTest : public ::testing::TestWithParam<TestInput> {
protected:
    Calculator calc;
};

static TEST_P(ParameterizedCalculatorTest, AddTests) {
    const auto& params = GetParam();
    EXPECT_EQ(params.expected, calc.Add(params.a, params.b));
}

//INSTANTIATE_TEST_SUITE_P
INSTANTIATE_TEST_CASE_P(
    Default,
    ParameterizedCalculatorTest,
    ::testing::Values(
        TestInput{ 1, 1, 2 },
        TestInput{ 10, -5, 5 }
    )
);