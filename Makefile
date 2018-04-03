#File: Makefile
#Author: Josh Freeman

#Make file for furniture inventory data

# Compiler Version
CC=g++

# Debugging flag -g
DEBUG=-g

# Target
TARGET=main

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o *~ $(TARGET)

