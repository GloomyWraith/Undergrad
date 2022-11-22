#include <stdio.h>
#include <stdlib.h>
#include"ficha.h"
#define TAM_MAX_NOME 50

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

int main ()
{ 
  char comando;
  int k,vsize, inputlen, inputRA;
  ficha *p;

  scanf("%c", &comando);
  
  //Novo fichario de tamanho vsize.
  if(comando == "N"){
    scanf("%i", &k);
    vsize = k;
    p = cria_fichario(vsize);
  }
  //Insere no fichario criado acima [inputlen (int)] fichas. 
  if(comando == "I"){
    
    scanf("%i", &k);
    inputlen = k;
    int i, j=0;
    do
    {
      for(i=0; i< vsize; i++){
        ficha *ra;
        ra = p+i*sizeof(ficha);
        if((*ra).RA == 0){
          //atribuição à variavel
        }
      }
      j++; //verificar se não para 1 vez antes!!!
    } while (j<inputlen);
    
    
  }

  //Printa todos os registros atualmente contidos no fichario.
  if(comando == "P"){
    int m;
    for (m=0; m<vsize;m++){
      imprime_ficha(p+m*sizeof(ficha));
    }
  }

  //Encerra a execucao do programa.
  if(comando == "F"){
    exit(0);
  }
  
  
  p->RA = 169250;
  printf("%i", (*(p)).RA);
  free(p);
}

