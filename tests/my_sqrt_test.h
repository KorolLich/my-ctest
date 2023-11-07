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

    Roots* result = my_sqrt(a, b, c);
    ASSERT_NEAR(result->root1, -1.0, epsilon);
    ASSERT_NEAR(result->root2, -1.0, epsilon);
}

TEST(mySqrtTest, ZeroRoots) {
    double a = 1.0;
    double b = 0.0;
    double c = 0.0;

    Roots* result = my_sqrt(a, b, c);
    ASSERT_NEAR(result->root1, 0.0, epsilon);
    ASSERT_NEAR(result->root2, 0.0, epsilon);
}

TEST(mySqrtTest, MixedRoots) {
    double a = 1.0;
    double b = 0.0;
    double c = -1.0;

    Roots* result = my_sqrt(a, b, c);
    ASSERT_NEAR(result->root1, 1.0, epsilon);
    ASSERT_NEAR(result->root2, -1.0, epsilon);
}

TEST(mySqrtTest, NoRealRoots) {
    double a = 1.0;
    double b = 2.0;
    double c = 2.0;
    Roots* ptr = NULL;
    Roots* result = my_sqrt(a, b, c);
    ASSERT_EQ(result, ptr);
}

TEST(mySqrtTest, NoRealRoots2) {
    double a = 1.0;
    double b = 1.0;
    double c = 1.0;
    Roots* ptr = NULL;
    Roots* result = my_sqrt(a, b, c);
    ASSERT_EQ(result, ptr);
}

TEST(mySqrtTest, ConflictingValue) {
    
    double a = 0.0; //По условию не может быть равно нулю
    double b = 1.0;
    double c = 1.0;
    Roots* ptr = NULL;
    Roots* result = my_sqrt(a, b, c);
    ASSERT_EQ(result, ptr);
}

#endif // MY_SQRT_TEST_H
