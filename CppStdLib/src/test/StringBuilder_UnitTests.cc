#include "gtest/gtest.h"      // include GoogleTest
#include "../project/StringBuilder.h"    // include class to test

namespace {
  // Test default constructor
  TEST(stringBuilder, DefaultContructor) {
    cppstdlib::StringBuilder sb;
    //EXPECT_STREQ("", sb.getString());

    EXPECT_EQ(0, sb.getLength());

    EXPECT_EQ(16, sb.getSize());
  }
}
