#include <gtest/gtest.h>
#include "hello/hello.hpp"

TEST(hello, hello) {
  ASSERT_EQ(hello::Hello().hello("world"), "hello world");
}

int main() {
  testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}