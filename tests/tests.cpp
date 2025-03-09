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
    testing::internal::CaptureStdout();

    findCombinations(5)
    std::string output = testing::internal::GetCapturedStdout();
    
    ASSERT_EQ(output, std::string("Possible combinations of scoring plays if a team's score is 5:\n0 TD + 2pt, 0 TD + FG, 0 TD, 1 FG, 1 Safety\n"));
}