all : myfirstapp

myfirstapp : main.o
	g++ main.o -o coinflip

# Win makefile
main.o : C:/Users/paul.smith/Documents/C_Projects/cpp-test/src/main.cpp
	g++ -Wall -w -IC:/Users/paul.smith/Documents/C_Projects/cpp-test/inc -c C:/Users/paul.smith/Documents/C_Projects/cpp-test/src/main.cpp

# RPi makefile
#main.o : ~/Documents/C_Projects/cpp-test/src/main.cpp
#	g++ -Wall -w -I/home/pi/Documents/C_Projects/cpp-test/inc -c #~/Documents/C_Projects/cpp-test/src/main.cpp

clean :
	rm coinflip main.o
