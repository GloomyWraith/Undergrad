#include <float.h>
#include <stdio.h>

double fabs( double x);
double sqrt(double x);
float hipotenusa(float a, float b);

int main(){

    double cateto1, cateto2;
    double hipo;

    //printf("modulo %f, %f \n sqrt %f,%f", fabs(cateto1), fabs(cateto2), sqrt(cateto1), sqrt(cateto2));

    int contin=0;
    
    while(contin==0)
    {
        printf("Por favor, digite os dois catetos (ou dois numeros negativos para parar):\n");
        scanf("%lf %lf", &cateto1, &cateto2);
        //printf("%.2lf %.2lf \n",cateto1, cateto2);

        if (cateto1 > 0 && cateto2 > 0)
        {
            hipo = hipotenusa(cateto1,cateto2);
            printf("Hipotenusa: %.2f \n", hipo);

        } else if (cateto1<0 || cateto2<0)
        {
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