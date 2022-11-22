#include "funcoes.h"

int is_primo(int n){
    //TODO: escreva o codigo da questão 1

    int flag = -1, i = 0;
    
    for (i = 2; i < n ; i++)
    {   int resto = n % i;

       
        
        if (resto == 0){
            flag = 0;
            return flag;
        }   else if (((i == n-1) && resto != 0 )|| n == 2){
        flag = 1;
        }
        
        /*printf("\ni = %d, n = %d, flag = %d, resto = %d", i, n, flag, resto);*/
    
    }
        if(n>0 && (n==1 || n % 2 == 0)){
        flag = 0;
    }
        if (n==2)
    {
       flag = 1;
    }
    
    /*printf("(%d)", flag);*/
    return flag;
    
}



