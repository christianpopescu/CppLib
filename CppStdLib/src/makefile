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
