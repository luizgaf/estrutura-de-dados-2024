#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
int main(int argc, char* argv[]){

    No* L = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* L_copia = copiar_lista(L);

    char novo_valor='G';
    int pos= 2;
    char valor_busca= 'C';

    printf("Verificando existencia de '%c' na lista: %s\n", valor_busca,
           lista_verificar_existencia(L_copia, valor_busca) ? "Sim" : "Nao");

    printf("Ocorrencias de '%c' na lista: %d\n", valor_busca,
           lista_verificar_ocorrencias(L_copia, valor_busca));

    printf("Inserindo '%c' na posicao %d:\n", novo_valor, pos);
    lista_inserir_no_i(L_copia, pos);

    printf("Removendo no na posicao %d:\n", 3);
    lista_remover_no_i(L_copia, pos);


    printf("Removendo nos com valor '%c':\n", valor_busca);
    lista_remover_no(L_copia, valor_busca);

    imprimir_lista(L_copia);

    printf("\nImprimindo lista inversa:\n ");
    lista_imprimir_inversa(L_copia);

}