#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

int main(int argc, char* argv[]) {

    Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);


    printf("\nin-order:\n");
    inOrder(root);
    printf("\n\n");

    printf("pre-order:\n");
    preOrder(root);
    printf("\n\n");

    printf("post-order:\n");
    postOrder(root);
    printf("\n\n");

    int num = atoi(argv[1]);

    Node* foundNode = search(root, num);
    if (foundNode) {
        printf("O no de valor: %i foi encontrado\n\n", num);
    } else {
        printf("Valor nao encontrado na arvore\n\n");
    }

    root = removeNode(root, num);
    printf("o valor de %i sera removido:\n\n", num);
    inOrder(root);
    printf("\n\n");

    return 0;
}