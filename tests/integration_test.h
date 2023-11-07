#ifndef INTEGRATION_TEST_H
#define INTEGRATION_TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "myfunc.h"
}

TEST(integraionTest, num4num6num8NoRouts) {
    int a = fibonachi(4);
    int b = fibonachi(6);
    int c = fibonachi(8);

    ASSERT_EQ(a, 3);
    ASSERT_EQ(b, 8);
    ASSERT_EQ(c, 21);

    Roots* ptr = NULL;
    Roots* result = my_sqrt(double(a), double(b), double(c));

    ASSERT_EQ(result, ptr);
}

#endif // INTEGRATION_TEST_H
