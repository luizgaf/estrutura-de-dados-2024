typedef struct tree{
    int num;
    struct tree* sd;
    struct tree* se;
} Tree;

Tree* createTree();
int isTreeEmpty(Tree* t);
void insertNode
