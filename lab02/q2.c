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

/*Conta quantas ocorrencias de um caractere especifico, c, há numa string, s[].*/
/*int analise_caractere(char c, char s[]){

    int count = 0, i;
    for(i = 0; i < MAX_SEQ_SIZE; i++){
        if (s[i] == c){
          printf("\nASCII: %d, %d \n", c, s[i]);
          count += 1;
        } else if (s[i] == '\0'){
          printf("%i", count);
          return count;
        }
    }
}


/*Traduz uma única trinca de codons no aminoácido correspondente, segundo a tabela padrão de codons de DNA.*/
/*char singletrans(char s[], int j){

    char aminoacids[] = {
            'I', 'L', 'V', 'F','M', 'C', 'A',
            'G', 'P', 'T', 'S', 'Y', 'W', 'Q', 'N',
            'H', 'E', 'D', 'K', 'R',
            '*',
            '\0'};

    char codons[] = "ATTATCATA,CTTCTCCTACTGTTATTG,GTTGTCGTAGTG,TTTTTC,ATG,TGTTGC,GCTGCCGCAGCG,GGTGGCGGAGGG,CCTCCCCCACCG,ACTACCACAACG,TCTTCCTCATCGAGTAGC,TATTAC,TGG,CAACAG,AATAAC,CATCAC,GAAGAG,GATGAC,AAAAAG,CGTCGCCGACGGAGAAGG,TAATAGTGA";
    int aminocounter = 0, i = 0, flag = 0;
    while(flag == 0){
        /*printf("\n i = %i, j = %i: %c%c%c (%i)", i,j,codons[i],codons[i+1],codons[i+2], aminocounter);
        if ((codons[i]==s[j]) && (codons[i+1]==s[j+1] )&& (codons[i+2]==s[j+2])){
            return aminoacids[aminocounter];
            flag = 1;
            break;
        } else if ( codons[i] == ','){
            aminocounter += 1;
            i-=2;
        } else if (i > 206){
            flag = 1;
            break;
        }
        i += 3;
        
    }   
}


Usa singletrans(char s[], int n) para traduzir n trincas em sequência.*/
/*void converte_nucleo (char s[MAX_SEQ_SIZE], char a[334]){
    int i, j, flag = 0;
    for(i=0; flag == 0;i+=1){
        j = 3*i;
        if (j > sizeof(s) ){
            flag = 1;
            break;
        } else {
            
            a[i] = singletrans(s,j);
            printf("\n i = %i, j = %i: %c (%i)", i, j, a[i], flag);
            
        }
    }
}

int freq_motivo(char p[], char m[]){
    return 0;
}

void conteudo_gc(char n[], int j){
    int i = 0;
    for(i = 0; i < j; i++){
        if(len(string) == j){
            int g = 0, c = 0;
            g == verifica_caractere("g",n[i]);
            c == verifica_caractere("c",n[i]);
            float soma = g + c, razao = 0;
            razao = soma/((float)j);
            if(soma != 0){
                printf("%f ", razao);
            }
        }
    }
} */