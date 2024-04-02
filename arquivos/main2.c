#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    char txt[100];
    FILE *arq_txt;

    arq_txt = fopen("arq_txt","r");
    if(arq_txt == NULL){
        printf("erro ao abrir o arquivo");
        exit(1);
    }
    while(fscanf(arq_txt, "%s", &txt) != EOF){
        printf("%s", txt);
    }

    fscanf(arq_txt, "%s", &txt);
    printf("txt = %s", txt);
    fclose(arq_txt);
    exit(0);
}