#include <stdio.h>
#include <stdlib.h>
#include"ficha.h"

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

ficha * cria_fichario (int n)
{
  ficha *fichario = malloc(n*sizeof(ficha));
  int i;
  
  for(i == 0; i<n; i++){
      (*(fichario+i*sizeof(ficha))).RA = 0;
  }
  return fichario;
}



float calcula_media_CR (ficha * ptr_estudante, int n)
{
  int i, count = 0;
  float soma = 0.0;
  for(i=0; i< n; i++){
    ficha *ra;
      ra = ptr_estudante+i*sizeof(ficha);
      if((*ra).RA != 0){
        count ++;
        soma += float32((*ra).RA);
      }
  }
  float media = soma/count;
  return media;
}


ficha * cria_fichario (int n)
{
  ficha *fichario = malloc(n*sizeof(ficha));
  int i;
  
  for(i == 0; i<n; i++){
      (*(fichario+i*sizeof(ficha))).RA = 0;
  }
  return fichario;
  
}


void imprime_ficha(ficha * estudante)
{
  if((*estudante).RA != 0){
        printf("%f %i %s %s \n", estudante->CR,estudante->RA,estudante->primeiro_nome, estudante->ultimo_nome);
  }
}

int busca_ficha (ficha * ptr_estudante, int n, int RAluno)
{
  int i;
  
  for(i=0; i<n ; i++){
    ficha *t = ptr_estudante + i*sizeof(ficha);
    if( (*t).RA == RAluno){
      
      return i;
    }else{
    }
    return -1; 
  }
}

int insere_ficha (ficha ** ptr_estudante, int * n, ficha estudante)
{
  int inserted = 0;
  ficha *q = &ptr_estudante;
  if( busca_ficha(q, &n, 0) != -1)
    {
      int indice = busca_ficha(q, &n, 0);
      (*(q + indice*sizeof(ficha))) = estudante;
      inserted = 1;
    }
  return inserted;
}


ficha le_ficha()
{
  ficha al;
  scanf("%s %s %i %f \n", &al.primeiro_nome, &al.ultimo_nome, &al.RA, &al.CR);
}

int remove_ficha (ficha * ptr_estudante, int n, int RA){
  int remover = busca_ficha(ptr_estudante, n, RA);
  if(remover == -1){
    return 0;
  } else {
    ficha *t = ptr_estudante + remover*sizeof(ficha);
    int j = 0;
    for(j = 0; j<(n - remover); ){
      (*(t + j*sizeof(ficha))) = (*(t + (j*sizeof(ficha)) + 1)); /* passa todas as fichas a partir da removida um indice para trás, para ocupar a ficha vazia que é criada pela remoção*/
    }
    (*(ptr_estudante + n*sizeof(ficha))).RA = 0; //Faz a ultima ficha do fichario constar como vazia.
    return 1;
  }
}

/*
   Fim do arquivo.
*/


