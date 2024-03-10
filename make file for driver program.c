CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main

main: main.o stack.o
    $(CC) $(CFLAGS) -o $@ $^

main.o: main.c stack.h
    $(CC) $(CFLAGS) -c $<

stack.o: stack.c stack.h
    $(CC) $(CFLAGS) -c $<

clean:
    rm -f main *.o

