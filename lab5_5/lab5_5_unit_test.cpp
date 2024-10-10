#include <gtest/gtest.h>
#include "./lab5_5.h"

// Тест для функції factorial
TEST(FactorialTest, PositiveNumbers)
{
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(5), 120);
    EXPECT_EQ(factorial(10), 3628800);
}

// Тест для функції binomialCoefficientFactorial
TEST(BinomialCoefficientFactorialTest, ValidInputs)
{
    EXPECT_EQ(binomialCoefficientFactorial(5, 2), 10);
    EXPECT_EQ(binomialCoefficientFactorial(6, 3), 20);
    EXPECT_EQ(binomialCoefficientFactorial(10, 0), 1);
    EXPECT_EQ(binomialCoefficientFactorial(10, 10), 1);
}

// Тест для функції binomialCoefficientRecursive
TEST(BinomialCoefficientRecursiveTest, ValidInputs)
{
    EXPECT_EQ(binomialCoefficientRecursive(5, 2), 10);
    EXPECT_EQ(binomialCoefficientRecursive(6, 3), 20);
    EXPECT_EQ(binomialCoefficientRecursive(10, 0), 1);
    EXPECT_EQ(binomialCoefficientRecursive(10, 10), 1);
}

// Тест на максимальну глибину рекурсії
TEST(BinomialCoefficientRecursiveTest, RecursionDepthTest)
{
    maxDepth = 0;
    recursionDepth = 0;
    binomialCoefficientRecursive(5, 2);
    EXPECT_EQ(maxDepth, 5);
}

// Основна функція для запуску тестів
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
