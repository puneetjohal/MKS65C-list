all: linkedlist.o
	gcc linkedlist.o

run:
	./a.out

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c
