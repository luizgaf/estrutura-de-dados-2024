typedef struct tree{
    char valor;
    struct tree* sd;
    struct tree* se;
} Tree;

Tree* createTree();
int isTreeEmpty(Tree* t);
void insertNode(char node);

