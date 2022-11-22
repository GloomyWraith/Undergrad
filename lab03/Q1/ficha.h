/*

  ficha.h - interface contendo tipo e operadores sobre esse tipo
            para armazenamento de fichas de estudantes.
  
  Autor: Marcelo Reis
  
  MC202G+H - 2 semestre de 2022.
  
  Última alteração: 13/09/2022.
  
*/

#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX_NOME 50

/*
  Definindo um tipo, usando struct, para
  armazenar fichas de estudantes.
*/
typedef struct
{
  char  primeiro_nome[TAM_MAX_NOME], ultimo_nome[TAM_MAX_NOME];
  int   RA;
  float CR;
} ficha;


/*
   Função que recebe um ponteiro para um vetor de fichas, um inteiro n que
   diz o tamanho do vetor e um inteiro que representa o RA de um estudante.
   A função devolve o índice do registro do(a) estudante no vetor de fichas
   ou então -1 caso contrário.
*/
int busca_ficha (ficha * ptr_estudante, int n, int RA);


/*
   Função que recebe um ponteiro para um vetor de fichas, um inteiro n que
   e devolve o CR médio dos estudantes armazenados nessa ficha.
*/
float calcula_media_CR (ficha * ptr_estudante, int n);


/*
   Função que recebe um inteiro positivo n, aloca na memória um vetor do tipo
   ficha com n registros vazios (i.e., registro com a variável RA com valor
   zerado) e devolve um ponteiro para a primeira posição desse vetor.
*/
ficha * cria_fichario (int n);


/*
   Função que recebe um ponteiro de um registro contendo a ficha de um
   estudante e a imprime na saída padrão.
*/
void imprime_ficha(ficha * estudante);


/*
   Função que recebe um ponteiro para o endereço do ponteiro de um vetor de
   fichas, um ponteiro para um inteiro n que diz o tamanho do vetor e uma
   ficha de um estudante. 
   A função insere então os dados do aluno no primeiro índice disponível
   (i.e., com RA == 0) e devolve 1; caso não exista índice disponível a função
   devolve zero.
*/
int insere_ficha (ficha ** ptr_estudante, int *n, ficha estudante);


/*
   Função que lê da entrada uma linha contendo os dados de um(a)
   estudante e devolve um registro que armazena esses dados. A linha deve
   conter um inteiro (RA), um float (CR), e duas strings sem espaços
   (primeiro nome e último sobrenome), nessa ordem.
*/
ficha le_ficha();


/*
   Função que recebe um ponteiro para um vetor de fichas, um inteiro n que diz
   o tamanho do vetor e um inteiro que representa o RA de um estudante. Se
   existir um registro com o RA então o mesmo é zerado e a função devolve 1;
   caso contrário ela devolve 0.
*/
int remove_ficha (ficha * ptr_estudante, int n, int RA);


/*
   Fim do arquivo.
*/


