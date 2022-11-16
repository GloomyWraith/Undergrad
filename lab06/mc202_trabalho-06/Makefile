all: main

main: main.o album.o
	gcc -std=c99 -Wall -Werror main.o album.o -lm -o main.bin -lm

main.o: main.c album.h
	gcc -std=c99 -Wall -Werror -c main.c -lm 

album.o: album.c album.h
	gcc -std=c99 -Wall -Werror -c album.c -lm

clean:
	rm *.o
	rm *.bin

