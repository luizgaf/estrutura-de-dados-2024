#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(){
    Tree* t = NULL;
    insertNode(t, 4);
    insertNode(t, 7);
    insertNode(t, 6);
    insertNode(t, 9);
    insertNode(t, 3);
    insertNode(t, 2);
    insertNode(t, 8);
    insertNode(t, 5);

    searchNode(t, 5);
    removeNode(t, 5);

    inOrder(t);
    preOrder(t);
    postOrder(t);
}