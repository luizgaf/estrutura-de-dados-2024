#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Tree* createTree(){
    Tree* t = (Tree*)malloc(sizeof(Tree));
    t->sd = NULL;
    t->se = NULL;
}


int isTreeEmpty(Tree* t){
    if(t == NULL){
        printf("A arvore esta vazia\n");
        return 1;
    }
}
void insertNode(char node){
    createTree;
    if(isTreeEmpty(t)){
        printf("A arvore esta vazia\n");
    }
    else{
        if(t->valor == NULL){
            t->valor = node;
        }
        else{
            if(node < t->valor){
                if(t->sd == NULL){
                    t->sd = (Tree*)malloc(sizeof(Tree));
                    t->sd->valor = node;
                    t->sd->sd = NULL;
                    t->sd->se = NULL;
                }
            }
            else if(t->se == NULL){
                    t->se = (Tree*)malloc(sizeof(Tree));
                    t->se->valor = node;
                    t->se->sd = NULL;
                    t->se->se = NULL;
            }
        }
    }
}
