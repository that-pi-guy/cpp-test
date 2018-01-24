all : firstapp

firstapp : main.o
	g++ main.o -o firstapp

# Win makefile
#main.o : C:/Users/paul.smith/Documents/C_Projects/cpp-test/src/main.cpp
#	g++ -Wall -IC:/Users/paul.smith/Documents/C_Projects/cpp-test/inc -c #C:/Users/paul.smith/Documents/C_Projects/cpp-test/src/main.cpp

# RPi makefile
main.o : ~/Documents/C_Projects/cpp-test/src/main.cpp
	g++ -Wall -I/home/pi/Documents/C_Projects/cpp-test/inc -c ~/Documents/C_Projects/cpp-test/src/main.cpp

clean :
	rm firstapp main.o
