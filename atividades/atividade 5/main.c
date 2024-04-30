#include <stdio.h>
#include <stdlib.h>
#include "lc.h"

int main(int argc, char* argv[]){
    No* H = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));

    char valor = *argv[1];

    imprimir_lista(H);
    inserir_no(H, valor);
    imprimir_lista(H);
    remover_no(H, valor);
    imprimir_lista(H);
    liberar_lista(H);

}