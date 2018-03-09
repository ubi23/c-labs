#CC represents compiler
CC=gcc
# compiler flags: -std=gnu99 used  for for loop with index defined inside the loop, enable debugging
CCFLAGS=-std=gnu99 -g -lm

#file to create - mycode, files needed to make it - printpgm.o ex1.o
draw:	lab5-ex2.o libturtle.a
	$(CC) $(CCFLAGS) libturtle.a $^ -o $@

polygon: lab5-ex2.o libturtle.a
	$(lab5-ex2.oCC) $(CCFLAGS) libturtle.a $^ -o $@

square:	lab5-ex2.o libturtle.a
	$(CC) $(CCFLAGS) libturtle.a $^ -o $@

#any file ending in ‘.o’ depends upon a similarly-named ‘.c’ file
#create these .o files
lab5-ex2.o: lab5-ex2.c
	$(CC) $(CCFLAGS) -c $^

#this target removes .o files when user types make clean
.PHONY:	clean

clean:
	rm -f *.o
