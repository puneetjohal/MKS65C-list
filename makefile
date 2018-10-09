all: linkedlist.o
	gcc linkedlist.o

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

run:
	./a.out
