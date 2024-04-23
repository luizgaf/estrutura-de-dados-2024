typedef struct No{
    char valor;
    struct No* proximo_no;
} No;

No* no(char valor, No* proximo_no); 
No* copiar_lista(No* L);
int lista_verificar_existencia(No* L, char valor_busca);
int lista_verificar_ocorrencias(No* L, char valor_busca);
void lista_imprimir_inversa(No* L);
void lista_inserir_no_i(No* L, char novo_valor, int i);
void lista_remover_no_i(No* L, int i);
void lista_remover_no(No* L, char valor_busca);
void imprimir_lista(No* L);