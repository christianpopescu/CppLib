PROJECT_DIR=project/
	
run : main	
	./main
	
main : main.o StringBuilder.o
	g++ -std=c++17 main.o StringBuilder.o -o main

main.o : main.cc $(PROJECT_DIR)StringBuilder.h $(PROJECT_DIR)StringBuilder.cc
	g++ -std=c++17 -c main.cc $(PROJECT_DIR)StringBuilder.cc

.PHONY: clean
	
clean :
	rm *.exe
	rm *.o
GTEST_CFLAGS = `pkg-config --cflags gtest_main`
GTEST_LIBS = `pkg-config --libs gtest_main`
TEST_DIR=test/
	   
.PHONY: tests all
	
tests: all
	./StringBuilder_UnitTests
       
all: StringBuilder_UnitTests
     
StringBuilder_UnitTests: StringBuilder_UnitTests.o StringBuilder.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@ $(GTEST_LIBS)
	 
StringBuilder_UnitTests.o: $(TEST_DIR)StringBuilder_UnitTests.cc 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< -c -o $@ $(GTEST_CFLAGS)

StringBuilder.o: $(PROJECT_DIR)StringBuilder.cc 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $< -c -o $@ 
	
