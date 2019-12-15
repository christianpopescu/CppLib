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

 TEST(stringBuilder, Append_2strings) {
    cppstdlib::StringBuilder sb;

    sb.append("test");
    sb.append("test");
    
    EXPECT_EQ("testtest", sb.getString());

    EXPECT_EQ(8, sb.getLength());

    EXPECT_EQ(16, sb.getSize());
  }

 TEST(stringBuilder, Append_3strings_no_resize) {
    cppstdlib::StringBuilder sb;

    sb.append("test");
    sb.append("test");
    sb.append("xyzw123");
    
    EXPECT_EQ("testtestxyzw123", sb.getString());

    EXPECT_EQ(15, sb.getLength());

    EXPECT_EQ(16, sb.getSize());
  }
 TEST(stringBuilder, Append_4strings_resize) {
    cppstdlib::StringBuilder sb;

    sb.append("test");
    sb.append("test");
    sb.append("xyzw123");
    sb.append("A");
    
    EXPECT_EQ("testtestxyzw123A", sb.getString());

    EXPECT_EQ(16, sb.getLength());

    EXPECT_EQ(32, sb.getSize());
  }
  
 TEST(stringBuilder, Append_5strings_resize) {
    cppstdlib::StringBuilder sb;

    sb.append("test");
    sb.append("test");
    sb.append("xyzw123");
    sb.append("A");
    sb.append("1234567890123456");
    
    EXPECT_EQ("testtestxyzw123A1234567890123456", sb.getString());

    EXPECT_EQ(32, sb.getLength());

    EXPECT_EQ(64, sb.getSize());
  }

}
