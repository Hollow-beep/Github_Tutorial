
# Variables to control Makefile operation
CC = g++
# compiler flags:
  #  -g     - this flag adds debugging information to the executable file
  #  -Wall  - this flag is used to turn on most compiler warnings

CFLAGS = -g -I -Wall
SRC = ../src

# ****************************************************
# Targets needed to bring the executable up to date
main: main.o Point.o PolyLine.o 
	$(CC) $(CFLAGS) -o main -c src/main.o src/Point.o src/PolyLine.o

main.o: src/main.cpp Header/Include/Point.h Header/Include/PolyLine.h
	$(CC) $(CFLAGS) -c src/main.cpp

Point.o: Point.h
#	$(CC) $(CFLAGS) –c Point.cpp

PolyLine.o: PolyLine.h Point.h
#	$(CC) $(CFLAGS) –c PolyLine.cpp Point.cpp