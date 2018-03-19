CC = gcc
CCOPTS = -std=c99

randtest: main.c randu.o test.o 
	$(CC) $(CCOPTS) $^ -o $@ -lm

test.o: test.c test.h
	$(CC) $(CCOPTS) -c test.c
	 
