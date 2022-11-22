
#include <stdio.h>

double fabs( double x);
double sqrt(double x);
float hipotenusa(float a, float b);

int main(){
    double cateto1, cateto2;
    double hipo;

    printf("modulo %f, %f \n sqrt %f,%f", fabs(cateto1), fabs(cateto2), sqrt(cateto1), sqrt(cateto2));
 

    int contin;
    
    while(contin)
    {
        printf("Por favor, digite os dois catetos (ou dois numeros negativos para parar):\n");
        scanf("%f %f", &cateto1,&cateto2);
        printf("%f %f",cateto1, cateto2);
        if (cateto1>0 && cateto2>0)
        {
            hipo = hipotenusa(cateto1,cateto2);
            printf("Hipotenusa: %f \n", hipo);

        } else if (cateto1<0 || cateto2<0) {
            contin = 1;
            break;
        }
    }
    return 0;
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
    double y = (x/2),erro=x,i=0 ;
    do
    {
        y = (y + x/y)/2;
        erro = fabs(y-x);
        i++;
    } while (erro >= 1e-12 || i <= 1000);
    return y;
}

float hipotenusa(float a, float b){

    double soma_quad = a*a + b*b;
    float hip = sqrt(soma_quad);

    return hip;
}