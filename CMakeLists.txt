cmake_minimum_required(VERSION 3.13)
project(EECS348-Lab-7)

if (CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
    cmake_policy(SET CMP0135 NEW)
endif()

include(FetchContent)
FetchContent_Declare(
  googletest
  # branch 1.16.x
  URL https://github.com/google/googletest/archive/e88cb95b92acbdce9b058dd894a68e1281b38495.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  tests
  tests/tests.cpp
)
target_link_libraries(
  tests
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)