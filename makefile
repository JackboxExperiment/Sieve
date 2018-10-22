all: sieve.o driver.o
	gcc sieve.o driver.o -lm

sieve.o: sieve.h sieve.c
	gcc -c sieve.c

driver.o: driver.c sieve.h
	gcc -c driver.c

run:
	./a.out
