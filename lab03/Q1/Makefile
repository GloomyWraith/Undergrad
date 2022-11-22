all: questao_1

questao_1: questao_1.o ficha.o
	gcc questao_1.o ficha.o -lm -o questao_1.bin

questao_1.o: questao_1.c ficha.h
	gcc -std=c99 -Wall -Werror -c questao_1.c

ficha.o: ficha.c ficha.h
	gcc -std=c99 -Wall -Werror -c ficha.c

clean:
	rm *.o
	rm *.bin

