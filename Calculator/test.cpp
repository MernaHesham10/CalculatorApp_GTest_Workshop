#include "pch.h"
#include <gtest/gtest.h>
#include "E:\Workshops\GTest\Calculator\CalculatorTestSuite\Calculator.cpp"
#include <tuple>

// 1. Basic Add Tests
//TEST(CalculatorTests, AddTest) {
//    Calculator calc;
//    EXPECT_EQ(5, calc.Add(2, 3));  // Non-fatal assertion
//    ASSERT_EQ(10, calc.Add(5, 5)); // Fatal assertion
//}
//
//TEST(CalculatorTests, DivideTest) {
//    Calculator calc;
//    EXPECT_NEAR(calc.Divide(5, 2), 2.5, 0.0001); // Use EXPECT_NEAR for precision
//}

// 2. Fixture Tests
//class CalculatorTest : public ::testing::Test {
//protected:
//    Calculator calc;
//};
//
//TEST_F(CalculatorTest, MultiplyTest) {
//    EXPECT_EQ(calc.Multiply(3, 4), 12);
//}
//
//TEST_F(CalculatorTest, SubtractTest) {
//    EXPECT_EQ(calc.Subtract(10, 3), 7);
//}

// 3. Parameterized Tests
/*class MultiplyTest : public ::testing::TestWithParam<std::tuple<int, int, int>> {
protected:
    Calculator calc;
};

TEST_P(MultiplyTest, ValidInputs) {
    int a, b, expected;
    std::tie(a, b, expected) = GetParam();
    EXPECT_EQ(calc.Multiply(a, b), expected);
}

// Use INSTANTIATE_TEST_SUITE_P
INSTANTIATE_TEST_SUITE_P(
    Default,
    MultiplyTest,
    ::testing::Values(
        std::make_tuple(2, 3, 6),
        std::make_tuple(-1, 5, -5),
        std::make_tuple(0, 10, 0),
        std::make_tuple(-2, -3, 6)
    )
);
*/

// 4. Death Tests (Error Handling)
//TEST(CalculatorDeathTest, DivideByZero) {
//    Calculator calc;
//    EXPECT_DEATH(calc.Divide(5, 0), ".*"); // Ensure proper death test behavior
//}

// 5. Disabled Test
//TEST(CalculatorTests, DISABLED_OldTest) {
//    Calculator calc;
//    EXPECT_EQ(0, calc.Add(0, 0));
//}

// Main function for Google Test
//int main(int argc, char** argv) {
//    ::testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}
