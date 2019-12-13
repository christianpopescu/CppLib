#ifndef CPP_LIB_STRINGBUILDER_H
#define CPP_LIB_STRINGBUILDER_H

namespace cppstdlib {
  class StringBuilder {
  public:
    StringBuilder();

  private :
    char* theString;
    int size;
    int length;
    const static int minAlloc;
  };
}

#endif // CPP_LIB_STRINGBUILDER_H
