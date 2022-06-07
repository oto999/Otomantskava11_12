CC=gcc
CFLAGS=-Wall 


all : strend
.PHONY : all

strend: main.o strend.o
	$(CC) $(CFLAGS) -o strend main.o strend.o

main.o : main.c 
	$(CC) -Wall -c -o main.o main.c

strend.o : strend.c 
	$(CC) -Wall -c -o strend.o strend.c
	
debug:clean main.c strend.c
	$(CC) -Wall -g -o occ main.c strend.c 
	gdb -tui  occ

	
	
.PHONY: clean
clean : 
	rm -rf *.o 