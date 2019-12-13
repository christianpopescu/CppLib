#include "StringBuilder.h"

namespace cppstdlib {
  const int StringBuilder::minAlloc = 16;

  StringBuilder::StringBuilder()
    : size{minAlloc},
    length {0}{
      theString = new char[minAlloc];
      theString[0] = 0x00;
    
  }
}
