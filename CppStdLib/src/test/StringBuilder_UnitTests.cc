#include "gtest/gtest.h"      // include GoogleTest
#include "../project/StringBuilder.h"    // include class to test

namespace {
  // Test default constructor
  TEST(stringBuilder, DefaultContructor) {
    cppstdlib::StringBuilder sb;
    EXPECT_EQ("", sb.getString());

    EXPECT_EQ(0, sb.getLength());

    EXPECT_EQ(16, sb.getSize());
  }
  
  TEST(stringBuilder, Append) {
    cppstdlib::StringBuilder sb;

    sb.append("test");
    
    EXPECT_EQ("test", sb.getString());

    EXPECT_EQ(4, sb.getLength());

    EXPECT_EQ(16, sb.getSize());
  }
  
}
