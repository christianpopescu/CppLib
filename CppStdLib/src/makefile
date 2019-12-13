run : main	
	./main

main : main.o StringBuilder.o
	g++ -std=c++17 main.o StringBuilder.o -o main

main.o : main.cc StringBuilder.h StringBuilder.cc
	g++ -std=c++17 -c main.cc StringBuilder.cc
