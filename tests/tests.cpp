#include <gtest/gtest.h>

extern "C" {
#include "lab.h"
}

/*
TEST(Factorial, ExpectedOutput) {
    ASSERT_EQ(factorial(0), 1);
    ASSERT_EQ(factorial(1), 1);
    ASSERT_EQ(factorial(2), 2);
    ASSERT_EQ(factorial(3), 6);
    ASSERT_EQ(factorial(4), 24);
    ASSERT_EQ(factorial(5), 120);
}
*/

TEST(Football, CorrectOutput) {
    ASSERT_EQ(count_combinations(5),   1);
    ASSERT_EQ(count_combinations(16), 14);
}