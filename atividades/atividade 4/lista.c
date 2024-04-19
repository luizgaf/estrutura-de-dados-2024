#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

No* copiar_lista(No* L){
   if(L != NULL){
        return no(L->valor, copiar_lista(L->proximo_no));
   }
   return NULL; 
}

int lista_verificar_existencia(No* L, char valor_busca){
    while(L != NULL){
        if(L->valor == valor_busca){
            return 1;
        }
        L = L->proximo_no;
    }
    return 0;
}

int lista_verificar_ocorrencias(No* L, char valor_busca){
    int qnt = 0;
    while(L != NULL){
        if(L->valor == valor_busca){
            qnt++;
        }
        L = L->proximo_no;
    }
    return qnt;
}

void imprimir_lista(No* L){
    if(L != NULL){
        printf("%c ", L->valor);
        imprimir_lista(L->proximo_no);
    }
}

void lista_imprimir_inversa(No* L){
    No* lista_invertida = NULL;
    No* atual = L;
    while(L!=NULL){
        No* proximo = atual->proximo_no;
        atual->proximo_no = lista_invertida;
        lista_invertida = atual;
        atual = proximo;
    }
    printf("Lista em ordem inversa:\n");
    while(lista_invertida != NULL){
        printf("%c ", lista_invertida->valor);
        lista_invertida = lista_invertida->proximo_no;
    }
    atual = NULL;
    while(lista_invertida != NULL){
        No* proximo = lista_invertida->proximo_no;
        lista_invertida->proximo_no = atual;
        atual = lista_invertida;
        lista_invertida = proximo;
    }
}

void lista_inserir_no_i(No* L, int i){
    No* novo_no = (No*) malloc(sizeof(No));
    if(i == 0){
        novo_no->proximo_no = L;
        L = novo_no;
    }
    else{
        No* atual = L;
        int j = 0;
        while(j < i-1 && atual != NULL){
            atual = atual->proximo_no;
            j++;
        }
        novo_no->proximo_no = atual->proximo_no;
        atual->proximo_no = novo_no;
    }

}
void lista_remover_no_i(No* L, int i){
    if(L != NULL){
        if(i == 0){
            No* tmp = L->proximo_no;
            free(tmp);
            return;
        }
        No* anterior = L;
        No* atual = L->proximo_no;
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
void lista_remover_no(No* L, char valor_busca){
    if(L != NULL){
        No* anterior = NULL;
        No* atual = L;
        while(atual != NULL && atual->valor != valor_busca){
            anterior = atual;
            atual = atual->proximo_no;
        }
        if(atual != NULL){
            if (anterior == NULL){
                L = atual->proximo_no;
                free(atual);
            }
            else{
                anterior->proximo_no = atual->proximo_no;
                free(atual);
        }
}
}
}