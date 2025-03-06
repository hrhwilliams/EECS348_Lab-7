#include <gtest/gtest.h>

extern "C" {
#include "lab.h"
}

TEST(Factorial, ExpectedOutput) {
    ASSERT_EQ(factorial(5), 120);
}
