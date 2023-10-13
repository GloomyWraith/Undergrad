#include"funcoes.h"
#include <stdio.h>
#include <float.h>

float det(int M[2][2]){
        float determinante = M[0][0]*M[1][1] - M[0][1]*M[1][0];
        return determinante;
    }

void matriz(int M[2][2]) {
    int i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++)
            scanf("%i", &M[i][j]);
            
    }
    
}

int main(){

    int v1,v2,v3,v4;

    int M[2][2];

    //TODO: entrada de dados
    printf("Digite os 4 numeros:");

    matriz(M[2][2]);


    if (det(M) < 0 ){
        printf("Determinante negativo!");
    } else if (det(M)== (float)0.0){
        printf("Determinante nulo!");
    } else {

        float hipot;
        hipot = cateto_from_matrix(M);
        printf("Determinante positivo! \n Hipotenusa do triangulo retangulo igual a %.2f", hipot);
    }



    //TODO: saida de dados
    return 0;
}

