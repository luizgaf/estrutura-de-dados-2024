#include <stdio.h>
#include <stdlib.h>
#include "listacircular.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void inserir_no(No* H, char valor){
    if(H!=NULL){
        if(H->proximo_no == NULL){
            H->proximo_no = no(valor, H);
        }
    }
    else{
        No* temp = H->proximo_no;
        while(tmp->proximo_no != H){
            printf("%c ", tmp->proximo_no);
            tmp = tmp->proximo_no;
        }
        tmp->proximo_no = no(valor, H);
    }
}