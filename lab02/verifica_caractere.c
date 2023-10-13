#include"funcoes.h"
#define MAX_SEQ_SIZE 1000

int main(){

    char c,s[MAX_SEQ_SIZE];

    printf("Digite o caractere 'c':");
    scanf("%c", &c);
    if('a'<= c && c <='z'){
        c = c - ' ';
    }
    
    int i;
    for (i = 0; i < MAX_SEQ_SIZE; i++){
        scanf("%c", &s[i]);
        if(s[i]=='\0'){
            break;
        }
    }

    for(int i = 0; i < MAX_SEQ_SIZE; i++){
        if('a'<= s[i] && s[i] <='z'){
            s[i] = s[i] - ' ';
        }
    }

    analise_caractere(c, s);
  	return 0;
}