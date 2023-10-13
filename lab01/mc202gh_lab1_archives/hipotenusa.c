#include <float.h>
#include <stdio.h>
#include"funcoes.h"



int main(){

    double cateto1, cateto2;
    double hipo;

    //printf("modulo %f, %f \n sqrt %f,%f", fabs(cateto1), fabs(cateto2), sqrt(cateto1), sqrt(cateto2));

    int contin=0;
    printf("Por favor, digite os dois catetos (ou dois números negativos para parar):\n");
    
    while(contin==0)
    {
        
        scanf("%lf %lf", &cateto1, &cateto2);
        //printf("%.2lf %.2lf \n",cateto1, cateto2);

        if (cateto1 > 0 && cateto2 > 0)
        {
            hipo = hipotenusa(cateto1,cateto2);
            printf("Hipotenusa eh %.2f \n", hipo);

        } else if (cateto1<0 || cateto2<0)
        {
            contin = 1;
            break;
        }
    }
    return 0;
}

