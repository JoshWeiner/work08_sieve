all: sieve.o driver.o
	gcc -o go sieve.o driver.o -lm

sieve.o: sieve.h sieve.c
	gcc -c sieve.c -lm

driver.o: sieve.h driver.c
	gcc -c driver.c

run:
	time ./go

clear:
	rm *.o
	rm go
