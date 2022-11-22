all: questao_2

questao_2: questao_2.o ficha.o
	gcc questao_2.o ficha.o -lm -o questao_2.bin

questao_2.o: questao_2.c ficha.h
	gcc -std=c99 -Wall -Werror -c questao_2.c

ficha.o: ficha.c ficha.h
	gcc -std=c99 -Wall -Werror -c ficha.c

clean:
	rm *.o
	rm *.bin

