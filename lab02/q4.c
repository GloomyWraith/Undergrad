#include<stdio.h>
#include<math.h>
#include<float.h>
#define MAX_SEQ_SIZE 1000

void converte_nucleo (char s[MAX_SEQ_SIZE], char a[334]);


int main(){

    char c,s[MAX_SEQ_SIZE], a[334];
    

    printf("Digite uma cadeia de codons:");
    int i;
    scanf("%s", s);
    

    for(i = 0; i < MAX_SEQ_SIZE; i++){
        if('a'<= s[i] && s[i] <='z'){
            s[i] = s[i] - ' ';
        }
    }
    
    converte_nucleo(s,a);
    printf("\n%s\n", a);
    return 0;
}

 

