#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

Tree* createTree(){
    Tree* t = (Tree*)malloc(sizeof(Tree));
    t->sd = NULL;
    t->se = NULL;
    return t;
}
// Função para criar uma árvore binária

int isTreeEmpty(Tree* t){
    if(t == NULL){
        printf("A arvore esta vazia\n");
        return 1;
    }
    return 0;
}

// Verificar se a árvore está vazia

void insertNode(Tree* t, int node){
    if(t == NULL){
        t = createTree();
        t->valor = node;
        return;
    }

    Tree* temp = t;
    Tree* pai = NULL; // Variável para manter o ponteiro para o pai do nó atual

    while(temp != NULL){
        pai = temp; // Atualiza o pai antes de descer na árvore

        if(node > temp->valor){
            temp = temp->sd; // Vai para a subárvore direita
        }
        else if(node < temp->valor){
            temp = temp->se; // Vai para a subárvore esquerda
        }
        else{
            printf("O valor '%d' ja existe na arvore\n\n", node);
            return;
        }
    }

    // Cria um novo nó e o insere como filho do pai
    Tree* filho = createTree();
    filho->valor = node;

    if(node > pai->valor){
        pai->sd = filho; // Insere na subárvore direita do pai
    }
    else{
        pai->se = filho; // Insere na subárvore esquerda do pai
    }
}


void freeTree(Tree* t) {
    // limpar memoria arvore
    if (t != NULL) {
        freeTree(t->sd);
        freeTree(t->se);
        free(t);
    }
}

Tree* findMin(Tree* t) {
    while (t->se != NULL) {
        t = t->se;
    }
    return t;
}

Tree* removeNode(Tree* t, int value) {
    if (t == NULL) {
        return t;
    }
    
    if (value < t->valor) {
        t->se = removeNode(t->se, value);
    } else if (value > t->valor) {
        t->sd = removeNode(t->sd, value);
    } else {
        // Nó encontrado
        if (t->se == NULL) {
            Tree* temp = t->sd;
            free(t);
            return temp;
        } else if (t->sd == NULL) {
            Tree* temp = t->se;
            free(t);
            return temp;
        }
        
        // Nó com dois filhos: obter o sucessor em ordem (menor na subárvore direita)
        Tree* temp = findMin(t->sd);
        t->valor = temp->valor;
        t->sd = removeNode(t->sd, temp->valor);
    }
    return t;
}

Tree* searchNode(Tree* t, int value) {
    if (t == NULL || t->valor == value) {
        return t;
    }
    
    if (value < t->valor) {
        return searchNode(t->se, value);
    } else {
        return searchNode(t->sd, value);
    }
}

void inOrder(Tree* t) {
    if (t != NULL) {
        inOrder(t->se);
        printf("%d ", t->valor);
        inOrder(t->sd);
    }
}

void preOrder(Tree* t) {
    if (t != NULL) {
        printf("%d ", t->valor);
        preOrder(t->se);
        preOrder(t->sd);
    }
}

void postOrder(Tree* t) {
    if (t != NULL) {
        postOrder(t->se);
        postOrder(t->sd);
        printf("%d ", t->valor);
    }
}