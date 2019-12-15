#ifndef CPP_LIB_STRINGBUILDER_H
#define CPP_LIB_STRINGBUILDER_H

#include <string>

namespace cppstdlib {
  class StringBuilder {
  public:
    StringBuilder();
    virtual ~StringBuilder();
    std::string getString(); // returns StringBuilder content as string
    int getLength();  //
    int getSize();    // get the allocated size
    void append(std::string str);  // append of string
    void clear();         // empty string

  protected :
    char* theString;
    int size;
    int length;
    const static int minAlloc;
    bool isEmpty();
  };
}

#endif // CPP_LIB_STRINGBUILDER_H
