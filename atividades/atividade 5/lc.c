#include <stdio.h>
#include <stdlib.h>
#include "lc.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void inserir_no(No* H, char valor){
    if( H != NULL){
        if( H->proximo_no == NULL){
            H->proximo_no = no;
        }
        else{
            inserir_no(H->proximo_no, no);
        }
    }
}

void imprimir_lista(No* H){
    if(H != NULL){
        printf("%c", H->valor);
        imprimir_lista(H->proximo_no);
    }
}

void remover_no(No* H, char valor){
    if(H != NULL){
        if(i == 0){
            No* tmp = H->proximo_no;
            free(tmp);
            return;
        }
        No* anterior = H;
        No* atual = H->proximo_no;
        int pos = 1;
        while (atual != NULL && pos < i) {
        anterior = atual;
        atual = atual->proximo_no;
        pos++;
    }
    anterior->proximo_no = atual->proximo_no;
    free(atual);
    }
}

void liberar_lista(No* H){
    if(H != NULL){
        liberar_lista(H->proximo_no);
        free(H);
    
}