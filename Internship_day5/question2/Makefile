CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: program

program: array.o main.o
	$(CC) $(CFLAGS) -o program array.o main.o

array.o: array.c array.h
	$(CC) $(CFLAGS) -c array.c

main.o: main.c array.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f program *.o