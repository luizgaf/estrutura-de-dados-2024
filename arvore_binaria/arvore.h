typedef struct tree{
    char valor;
    struct tree* sd;
    struct tree* se;
} Tree;

Tree* createTree();
int isTreeEmpty(Tree* t);
void insertNode(Tree* t, int node);
void freeTree(Tree* t);
void inOrder(Tree* t);
void preOrder(Tree* t);
void postOrder(Tree* t);
Tree* searchNode(Tree* t, int value);
Tree* removeNode(Tree* t, int value);
Tree* findMin(Tree* t);

