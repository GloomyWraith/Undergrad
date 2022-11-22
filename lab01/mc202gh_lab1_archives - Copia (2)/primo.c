#include"funcoes.h"
#include <stdio.h>


int main(){
    int n;
    printf("Digite um numero:");
    scanf("\n%d", &n);

    int saida = is_primo(n);


    if (n > 1 && saida == 1)
    {   
        printf("\nNumero primo!"); 
    }
    else if (saida == 0)
    {
        printf("\nNumero nao primo!");
    }
    else
    {
        printf("\nErro!");
    }
    return 0;
}