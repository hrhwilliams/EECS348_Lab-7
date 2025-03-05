#include <gtest/gtest.h>

extern "C" {
#include "factorial.h"
#include "fibonacci.h"
}

TEST(FactorialTest, FirstFewN) {
  EXPECT_EQ(factorial(0),  1);
  EXPECT_EQ(factorial(1),  1);
  EXPECT_EQ(factorial(2),  2);
  EXPECT_EQ(factorial(3),  6);
  EXPECT_EQ(factorial(4), 24);
}

TEST(FibonacciTest, FirstFewN) {
  EXPECT_EQ(fibonacci(0), 1);
  EXPECT_EQ(fibonacci(1), 1);
  EXPECT_EQ(fibonacci(2), 2);
  EXPECT_EQ(fibonacci(3), 3);
  EXPECT_EQ(fibonacci(4), 5);
  EXPECT_EQ(fibonacci(5), 8);
}