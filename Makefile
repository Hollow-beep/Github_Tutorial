
# Variables to control Makefile operation
CC = g++
# compiler flags:
  #  -g     - this flag adds debugging information to the executable file
  #  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS = -g -I 
SRC = src
IDIR = Header/Include

# ****************************************************
# Targets needed to bring the executable up to date
main: main.o Point.o PolyLine.o 
	$(CC) $(CFLAGS) -o main -c $(SRC)/main.o $(SRC)/Point.o $(SRC)/PolyLine.o

main.o: $(SRC)/main.cpp $(IDIR)/Point.h $(IDIR)/PolyLine.h
	$(CC) $(CFLAGS) -c $(SRC)/main.cpp

Point.o: Point.h
	$(CC) $(CFLAGS) –c $(SRC)Point.cpp

PolyLine.o: PolyLine.h Point.h
	$(CC) $(CFLAGS) –c $(SRC)PolyLine.cpp $(SRC)Point.cpp