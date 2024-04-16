#include <stdio.h>
#include <stdlib.h>
#include "lista_encadeada.h"
int main(int agrc, char* argv[]){
    No* H = no('A', NULL);
    No* n2 = no('B', NULL);
    No* n3 = no('C', NULL);   
    No* n4 = no('J', NULL);
    No* n5 = no('Y', NULL);

    inserir_no(H, n2);
    inserir_no(H, n3);
    inserir_no(H, n4);
    inserir_no(H, n5);

    imprimir_lista(H);

    printf("\n qtd = %i", quantidade_nos(H));

    exit(0);
}