typedef struct no{
    int data;
    struct no *left, *right;
}No;

typedef struct{
    No *root;
}BTree;

void inserirEsquerda(No *no, int valor);
void inserirDireita(No *no, int valor);
void inserir(BTree *tree, int valor);
void imprimir(No *root);