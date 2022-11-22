#include"funcoes.h"
#include<stdio.h>

/*Conta quantas ocorrencias de um caractere especifico, c, há numa string, s[].*/
int analise_caractere(char c, char s[]){

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


/*Traduz uma única trinca de codons no aminoácido correspondente, segundo a tabela padrão de codons de DNA.
O índice é a posição do primeiro aminoácido da trinca buscada na string.*/
char singletrans(char s[], int j){

    char aminoacids[] = {
            'I', 'L', 'V', 'F','M', 'C', 'A',
            'G', 'P', 'T', 'S', 'Y', 'W', 'Q', 'N',
            'H', 'E', 'D', 'K', 'R',
            '*',
            '\0'};

    char codons[] = "ATTATCATA,CTTCTCCTACTGTTATTG,GTTGTCGTAGTG,TTTTTC,ATG,TGTTGC,GCTGCCGCAGCG,GGTGGCGGAGGG,CCTCCCCCACCG,ACTACCACAACG,TCTTCCTCATCGAGTAGC,TATTAC,TGG,CAACAG,AATAAC,CATCAC,GAAGAG,GATGAC,AAAAAG,CGTCGCCGACGGAGAAGG,TAATAGTGA";
    int aminocounter = 0, i = 0, flag = 0;
    while(flag == 0){
        printf("\n i = %i, j = %i: %c%c%c (%i)", i,j,codons[i],codons[i+1],codons[i+2], aminocounter);
        if ((codons[i]==s[j]) && (codons[i+1]==s[j+1] )&& (codons[i+2]==s[j+2])){
            return aminoacids[aminocounter];
            flag = 1;
            break;
        } else if ( codons[i] == ','){
            aminocounter += 1;
            i++;
        } else if (i > 206){
            flag = 1;
            break;
        } else{
            i += 3;
        }
        
        
    }   
}


/*Usa singletrans(char s[], int n) para traduzir n trincas em sequência.*/
void converte_nucleo (char s[MAX_SEQ_SIZE], char a[334]){
    int i, j, stringsize = 0, t;
    for(t = 0; s[t] != '\0'; t++){
        stringsize = t;
        /*printf("\nt = %i, stringsize = %i", t, stringsize);*/ 
    }
    int sizeout = ((stringsize + 1)/3) - 1;
    

    for (i = 0;i<=sizeout; i++){
        j = 3*i;
        
        a[i] = singletrans(s,j);
          
    }
    a[sizeout+1] = '\0';
}

/*Printa um vetor com o conteúdo gc de cada substring de tamahno j contida em n[].*/
void conteudo_gc(char n[], int j){

    int i = 0, t, stringsize;
    for(t = 0; n[t] != '\0'; t++){
        stringsize = t;
        /*printf("\nt = %i, stringsize = %i", t, stringsize);*/ 
    }
    int sizeout = ((stringsize + 1)/3) - 1;
    
    for(i = 0; i < j; i++){
        if(j<=sizeout){
            int g = 0, c = 0;
            g == analise_caractere("g",n[i,j]);
            c == analise_caractere("c",n[i,j]);
            float soma = g + c, razao = 0;
            razao = soma/((float)j);
            if(soma != 0){
                printf("%f ", razao);
            }
        }
    }
}