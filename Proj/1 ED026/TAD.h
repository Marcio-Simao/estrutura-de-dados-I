#ifndef TAD_H
#define TAD_H


//a implementaccao sera no arquivo c
typedef struct _no no;  // significa que o no equivale a estrutra _no... ou seja e //um novo tipo de dados
typedef struct _listasimples listasimples;



listasimples *listasimples_criar();
no *no_criar(int valor);

listasimples *inserirFim(listasimples *L, int x); // Lista* inserirFim(Lista * l, int x);
listasimples *inserirIni(listasimples *L, int x); //  Lista* inserirIni(Lista * l, int x);
listasimples *remover(listasimples *L, int valor);

void imprimir(listasimples *L);
void imprimirrecursiva(listasimples *L);



#endif

