#include <stdio.h>
#include <stdlib.h>
#include "ficha.h"


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

  //busca um RA no fichario
  if(comando == "B"){
    scanf("%i", &inputRA);
    int busca = busca_ficha(p, vsize, inputRA);
    if(busca == -1){
      printf("RA %i inexistente", inputRA);
    } else {
      imprime_ficha(p + busca*sizeof(ficha));
    }
  }

  //remove uma ficha do fichario
  if(comando == "R"){
    scanf("%i", &inputRA);
    int remove = busca_ficha(p, vsize, inputRA);
    if(remove == -1){
      printf("RA %i inexistente", inputRA);
    } else {
      remove_ficha(p, vsize, inputRA);
    }
  }

  //Encerra a execucao do programa.
  if(comando == "F"){
    exit(0);
  }
  
  
  free(p);
  return 0;
}

/* Fim do programa */

