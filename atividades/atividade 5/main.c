#include <stdio.h>
#include <stdlib.h>
#include "lc.h"

int main(int argc, char* argv[]){

    No* H = no('A', NULL);
    inserir_no(H, 'B');
    inserir_no(H, 'C');
    inserir_no(H, 'K');
    inserir_no(H, 'P');

    imprimir_lista(H);
    printf("\n");

    inserir_no(H, 'L');
    imprimir_lista(H);
    printf("\n");

    remover_no(H, 'Y');
    imprimir_lista(H);
    printf("\n");

    liberar_lista(H);
    exit(0);
}