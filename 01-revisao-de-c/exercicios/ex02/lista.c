#include <stdlib.h>
#include <stdio.h>
#include "lista.h"

typedef struct no{
    int valor;
    struct no *prox;
}l;  

lista* criarLista (){
    return NULL;
}

lista* inserirFim (lista *no, int x){
    lista *novono = (lista*) malloc(sizeof(lista));
    if (novono){
        novono -> valor=x;
        novono -> prox=NULL;
        if (l==NULL){
            return novono;
        }
        
}


void imprimir (lista * no);
lista* pesquisar (lista *no, int x);
lista* remover (lista *no, int x);