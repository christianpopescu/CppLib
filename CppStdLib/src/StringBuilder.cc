#include "StringBuilder.h"

namespace cppstdlib {
  const int StringBuilder::minAlloc = 16;

  StringBuilder::StringBuilder()
    : size{minAlloc},
    length {0}{
      theString = new char[minAlloc];
      theString[0] = 0x00;
  }
  StringBuilder::~StringBuilder() {
    delete[] theString;
  }
  
  std::string StringBuilder::getString(){
    std::string result(theString);
    return result;
  }

  int StringBuilder::getLength(){
    return length;
  }

  int StringBuilder::getSize(){
    return size;
  }

  
  void StringBuilder::append(std::string str){

    char* dest = nullptr;
    // 1. Test if enough space
    if (size < length + str.size() + 1) {
      // 1.1 - Allocate new string and adjust size
      size *= 2;
      char* tmp = new char[size];

      // 1.2 - Copy to new allocated string and free old string memory
      char* source = theString;
      dest = tmp;
      while (*dest++ = *source++); // copy source to destionation
      --dest; // step back
      delete[] theString;
      theString = tmp;
    } else {
      dest = theString + length;
    }

  // 2 - Append new string
      for (auto c : str){
	*dest++ = c;
      }

      length += str.size();
      *(theString + length) = 0x00;

      // 3 - Adjust lenght
      
  }

}
