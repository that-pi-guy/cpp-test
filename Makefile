all : firstapp

firstapp : test.o
	g++ test.o -o myfirstapp

# Win makefile
test.o : C:/Users/paul.smith/Documents/C_Projects/cpp-test/src/test.cpp
	g++ -Wall -w -IC:/Users/paul.smith/Documents/C_Projects/cpp-test/inc -c C:/Users/paul.smith/Documents/C_Projects/cpp-test/src/test.cpp

# RPi makefile
#main.o : ~/Documents/C_Projects/cpp-test/src/main.cpp
#	g++ -Wall -I/home/pi/Documents/C_Projects/cpp-test/inc -c #~/Documents/C_Projects/cpp-test/src/main.cpp

clean :
	rm myfirstapp test.o
