#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


void inserirEsquerda(No *no, int valor) {
    if(no->left == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->data = valor;
        novo->left = NULL;
        novo->right = NULL;
        no->left = novo;
    }
    else {
        if(valor < no->left->data)
            inserirEsquerda(no->left, valor);
        if(valor > no->left->data)
            inserirDireita(no->left, valor);
    }
}


void inserirDireita(No *no, int valor) {
    if(no->right == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->data = valor;
        novo->left = NULL;
        novo->right = NULL;
        no->right = novo;
    }
    else {
        if(valor > no->right->data)
            inserirDireita(no->right, valor);
        if(valor < no->right->data)
            inserirEsquerda(no->right, valor);
    }
}


void inserir(BTree *tree, int valor) {
    if(tree->root == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->data = valor;
        novo->left = NULL;
        novo->right = NULL;
        tree->root = novo;
    }
    else{
        if(valor < tree->root->data)
            inserirEsquerda(tree->root, valor);
        if(valor > tree->root->data)
            inserirDireita(tree->root, valor);
    }
}

void imprimir(No *root) {
    if(root != NULL) {
        imprimir(root->left);
        printf("%d ", root->data);
        imprimir(root->right);
    }
}