#include "funcoes.h"
#include<stdio.h>
#include<float.h>

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

double fabs(double x){
    if(x >= 0){
        return x;
    } else {
        return -x;
    }
    //Calcula a norma de um numero real
}

double sqrt(double x){
    double y = (x/2.0),diferenca=x;
    int i = 0;
    do
    {
        double y2 = (y + x/y)/2;
        diferenca = fabs(y2-y);
        y = y2;
        i++;
        if (diferenca<1e-4 || i == 1000){
            return y;
        }
    } while (diferenca >= 1e-4 || i <= 1000);
    
}

float hipotenusa(float a, float b){

    double soma_quad = ((a*a) + (b*b));
    float hip = sqrt(soma_quad);

    return hip;
}

float cateto_from_matrix(int M[2][2]){

    float determinante = M[0][0]*M[1][1] - M[0][1]*M[1][0];
    
    float x = sqrt(2*determinante);
    return x;
}


