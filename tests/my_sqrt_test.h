#ifndef MY_SQRT_TEST_H
#define MY_SQRT_TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(mySqrtTest, PositiveRoots) {
    double a = 1.0;
    double b = 2.0;
    double c = 1.0;

    const Roots* result = my_sqrt(a, b, c);
    ASSERT_NEAR(result->root1, -1.0, epsilon);
    ASSERT_NEAR(result->root2, -1.0, epsilon);
}

TEST(mySqrtTest, RealRoots) {
    double a = 2.3;
    double b = -10.6;
    double c = 10.3;

    const Roots* result = my_sqrt(a, b, c);
    ASSERT_NEAR(result->root1, 3.21635552014, epsilon);
    ASSERT_NEAR(result->root2, 1.39234013202, epsilon);
}

TEST(mySqrtTest, StandartLinearEquation) {
    double a = 0.0;
    double b = -10.6;
    double c = 10.3;

    const Roots* result = my_sqrt(a, b, c);
    ASSERT_NEAR(result->root1, 0.9716981132, epsilon);
    ASSERT_NEAR(result->root2, 0.9716981132, epsilon);
}

TEST(mySqrtTest, MixedRoots) {
    double a = 1.0;
    double b = 0.0;
    double c = -1.0;

    const Roots* result = my_sqrt(a, b, c);
    ASSERT_NEAR(result->root1, 1.0, epsilon);
    ASSERT_NEAR(result->root2, -1.0, epsilon);
}

TEST(mySqrtTest, NoRealRoots) {
    double a = 1.0;
    double b = 2.0;
    double c = 2.0;
    Roots* ptr = NULL;
    const Roots* result = my_sqrt(a, b, c);
    ASSERT_EQ(result, ptr);
}

TEST(mySqrtTest, NoRealRoots2) {
    double a = 1.0;
    double b = 1.0;
    double c = 1.0;
    Roots* ptr = NULL;
    const Roots* result = my_sqrt(a, b, c);
    ASSERT_EQ(result, ptr);
}

TEST(mySqrtTest, NotEquation) {
    double a = 0.0; //По условию не может быть равно нулю
    double b = 0.0;
    double c = 1.0;

    Roots* ptr = NULL;
    const Roots* result = my_sqrt(a, b, c);
    ASSERT_EQ(result, ptr);
}

#endif // MY_SQRT_TEST_H
