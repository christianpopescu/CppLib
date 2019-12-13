#include <iostream>
#include "StringBuilder.h"


int main() {
  const std::string sp = " ";
  cppstdlib::StringBuilder sb;
  std::cout << sb.getString() << std::endl;
  sb.append("test");
  std::cout << sb.getString() << sp << sb.getLength() << sp << sb.getSize()  << std::endl;
  sb.append("test");
  std::cout << sb.getString() << sp << sb.getLength() << sp << sb.getSize()  << std::endl;
  sb.append("testabcdef");
  std::cout << sb.getString() << sp << sb.getLength() << sp << sb.getSize()  << std::endl;
  
  std::cout << "End of programm" << std::endl;
}
