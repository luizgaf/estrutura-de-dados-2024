#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main() {
    int op, valor;
    BTree tree;
    tree.root = NULL;

    do{
        printf("\n0 - sair\n1 - inserir\n2 - imprimir\n");
        scanf("%d", &op);

        switch(op){
            case 0:
                printf("\nSaindo...\n");
                break;

            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserir(&tree, valor);
                break;

            case 2:
                printf("\nImpressao da arvore binaria:\n");
                imprimir(tree.root);
                printf("\n");
                break;

            default: 
                printf("\nOpcao invalida\n");
        }
    }while(op != 0);
}