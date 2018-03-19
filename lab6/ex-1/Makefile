# declaring the variables
CC=gcc
# enabling compiler flags
CFLAGS= -c -g -std=c99

all: image

image: printpgm.o
	$(CC) printpgm.o -o image

# compiling printpgm.c
printpgm.o: printpgm.c
	$(CC) $(CFLAGS) printpgm.c

# removing the object file
.PHONY: clean
clean:
	rm -rf *o printpgm
	#rm *.o
