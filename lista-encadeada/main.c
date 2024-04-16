#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"
int main(int agrc, char* argv[]){
    No* n1 = no('A', NULL);
    No* n2 = no('B', NULL);
    No* n3 = no('C', NULL);    
    
    n1->proximo_no = n2;
    n2->proximo_no = n3;

    No* h = n1;
    do{
        printf("%c ", h->valor);
        h = h->proximo_no;
    }while(h != NULL);

    exit(0);
}