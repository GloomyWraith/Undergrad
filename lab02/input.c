#include<stdio.h>
#include<math.h>
#include<float.h>
#define MAX_SEQ_SIZE 1000


int main(){

    char c,s[MAX_SEQ_SIZE], p[MAX_SEQ_SIZE], a[334];
    
    printf("\n%s \n %s", s, p);
    printf("\nDigite uma cadeia de codons:");
    int i;
    
    printf("----------\n%s\n ------ \n %s", s, p);
    int len=0;
    for(int i = 0; i < MAX_SEQ_SIZE; i++){
        int x = getchar(());
        if( x != EOF){
            len++;
        }
        if('a'<= s[i] && s[i] <='z'){
            s[i] = s[i] - ' ';
        }
    }
    printf("%i", len);
    return 0;
}