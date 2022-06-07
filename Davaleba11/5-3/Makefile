CC=gcc
CFLAGS=-Wall 


all : strcat_ptr
.PHONY : all

strcat_ptr: main.o strcat_ptr.o
	$(CC) $(CFLAGS) -o strcat_ptr main.o strcat_ptr.o

main.o : main.c 
	$(CC) -Wall -c -o main.o main.c

strcat_ptr.o : strcat_ptr.c 
	$(CC) -Wall -c -o strcat_ptr.o strcat_ptr.c
	
debug:clean main.c strcat_ptr.c
	$(CC) -Wall -g -o occ main.c strcat_ptr.c 
	gdb -tui  occ

	
	
.PHONY: clean
clean : 
	rm -rf *.o 