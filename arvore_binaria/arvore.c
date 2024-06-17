#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Tree* createTree(){
    Tree* t = (Tree*)malloc(sizeof(Tree));
    t->sd = NULL;
    t->se = NULL;
}

int isTreeEmpty(Tree* t){
    if(t->sd = NULL && t->se = NULL){
        printf("A arvore esta vazia\n");
        return 1;
    }
}
