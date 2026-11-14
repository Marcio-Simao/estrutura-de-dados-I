//lista.h

typedef struct no lista;
lista* criarLista ();
lista* inserirFim (lista *no, int x);
void imprimir (lista * no);
lista* pesquisar (lista *no, int x);
lista* remover (lista *no, int x);

