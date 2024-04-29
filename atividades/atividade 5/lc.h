typedef struct No{
    char valor;
    struct No* proximo_no;
} No;

No* no(char valor, No* proximo_no); 
inserir_no(No* H, char valor);
imprimir_lista(No* H);
remover_no(No* H, char valor);
liberar_lista(No* H);