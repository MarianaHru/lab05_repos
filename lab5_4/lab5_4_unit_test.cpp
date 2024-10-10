#include <gtest/gtest.h>
#include "./lab5_4.h"

TEST(SeriesTest, TestS0)
{
    int i = 1;
    int N = 5;
    double result = S0(i, N);
    EXPECT_NEAR(result, 11.5347, 1e-4); // Очікуване значення необхідно перевірити
}

TEST(SeriesTest, TestS1)
{
    int i = 1;
    int N = 5;
    double result = S1(i, N, i);
    EXPECT_NEAR(result, 11.5347, 1e-4); // Очікуване значення необхідно перевірити
}

TEST(SeriesTest, TestS2)
{
    int i = 1;
    int N = 5;
    double result = S2(i, N, N);
    EXPECT_NEAR(result, 11.5347, 1e-4); // Очікуване значення необхідно перевірити
}

TEST(SeriesTest, TestS3)
{
    int i = 1;
    int N = 5;
    double result = S3(i, N, i, 0);
    EXPECT_NEAR(result, 11.5347, 1e-4); // Очікуване значення необхідно перевірити
}

TEST(SeriesTest, TestS4)
{
    int i = 1;
    int N = 5;
    double result = S4(i, N, N, 0);
    EXPECT_NEAR(result, 11.5347, 1e-4); // Очікуване значення необхідно перевірити
}

// Основна функція для запуску тестів
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
