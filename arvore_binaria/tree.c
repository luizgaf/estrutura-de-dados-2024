#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


// função para criar nos
Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(!newNode){
        printf("Erro");
        exit(1);
    }
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// função para inserir nós
Node* insert(Node* root, int data){
    if(root == NULL){
        root = createNode(data);
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
        }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}

// função para procurar nós
Node* search(Node* root, int data){
    if(root == NULL || root->data == data){
        return root;
    }
    else if(data <= root->data){
        return search(root->left, data);
    }
    else{
        return search(root->right, data);
    }
}

// função para achar o menor nó
Node* findMin(Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// remover nó
Node* removeNode(Node* root, int data) {
    if (root == NULL) {
        return root;
    }
    if (data < root->data) {
        root->left = removeNode(root->left, data);
    } else if (data > root->data) {
        root->right = removeNode(root->right, data);
    } else {
        // caso nao tenha filhos
        if (root->left == NULL && root->right == NULL) {
            free(root);
            root = NULL;
        }
        // caso tenha 1 filho
        else if (root->left == NULL) {
            Node* temp = root;
            root = root->right;
            free(temp);
        } 
        // caso tenha um filho
        else if (root->right == NULL) {
            Node* temp = root;
            root = root->left;
            free(temp);
        }
        // caso tenha dois filhos
        else {
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = removeNode(root->right, temp->data);
        }
    }
    return root;
}

// in order
void inOrder(Node* root) {
    if (root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}