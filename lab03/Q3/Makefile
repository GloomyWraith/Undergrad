all: questao_3

questao_3: questao_3.o ficha.o
	gcc questao_3.o ficha.o -lm -o questao_3.bin

questao_3.o: questao_3.c ficha.h
	gcc -std=c99 -Wall -Werror -c questao_3.c

ficha.o: ficha.c ficha.h
	gcc -std=c99 -Wall -Werror -c ficha.c

clean:
	rm *.o
	rm *.bin

