
#include <stdio.h>
#include <stdlib.h>
#include "TAD.h"


/*L aponta para a estrutura da lista (listasimples).
L->inicio aponta para o primeiro nó (no).*/


typedef struct _no{
	int valor;
	struct	_no *prox;
	
	
}no;

// esta estrutura (no) ira apontar para o inicio da lista
typedef struct _listasimples{ 
	no *inicio,  *fim ;
	
		
}listasimples;


//criacao do no que ira ser linkado aos restantes nos, ele deve ser do tipo de no q a gente ja criou 
 no *no_criar(int valor){
 	
 	no *nno= malloc (1*sizeof(no));
 	
 		//essa verificacao consiste em preservar a lista originl caso nao se consiga crisr um novo no
 	    if (nno==NULL) {
        return NULL;
    }


 	nno->valor=valor;
 	nno->prox=NULL;
 	
 	return nno;
 }


    //fizemos a criacao da estrutura da lista que aponta para o inicio
listasimples *listasimples_criar (){
	
	listasimples *L= malloc(1*sizeof(listasimples));
	if(L==NULL){
		return NULL;
	}
	L->inicio=NULL;
	L->fim=NULL;

	return L;
}


listasimples *inserirIni(listasimples *L, int x){

    //se o inicio da nossa lista estiver vazio, criamos um no e colocamos o valor dentro deste no ja
    //depois de criar o no e colocar o valor x nele, colocamos o inicio da lista a apontar para o novo no

    if(L->inicio == NULL){

        no *n = no_criar(x);


			//essa verificacao consiste em preservar a lista originl caso nao se consiga crisr um novo no
        if(n == NULL){
            return L;
        }

        L->inicio = n;
        L->fim = n;

    }

    //caso nao seja null, ou seja, caso n estiver vazia
    // colocamos o novo no a apontar para onde o inicio da lista aponta
    // depois disso, colocamos o inicio a apontar para o novo no
    // desse modo, ele nao ira perder a referencia

    else{

        no *n = no_criar(x);


		//essa verificacao consiste em preservar a lista originl caso nao se consiga crisr um novo no
        if(n == NULL){
            return L;
        }

        n->prox = L->inicio;
        L->inicio = n;

    }

    return L;
}
		
		
listasimples *inserirFim(listasimples *L, int x){

//Na inserção no fim, optei por utilizar um ponteiro auxiliar (fim) que 
//guarda o endereço do último nó da lista. Dessa forma n percorremos  toda lista 
//para encontrar o ultimo no 

    no *n = no_criar(x);

	//essa verificacao consiste em preservar a lista originl caso nao se consiga crisr um novo no
    if(n == NULL){
        return L;
    }

    if(L->inicio == NULL){

         //se a lista estiver vazia, ambaos vao receber o inicio do no ou seja o no
        L->inicio = n;
        L->fim = n;

    }
    else{

        // ou seja este ultimo
        L->fim->prox = n;
        L->fim = L->fim->prox; //atualiza o ponteiro que identifica o último nó.

    }

    return L;
}



		
		
		
void imprimir(listasimples *L){
	
	no *n=L->inicio; // crio apenas uma referencia para ter acesso ao no
	
	// enquanto n chegarmos ao fim da lista, vamos imprimir cada elemento la econtrado
	printf("L->");
	while (n!=NULL){
		
		printf(" %d ", n->valor);
		n=n->prox;
	
	}
	
	
	
}

/* listasimples *imprimirrecursiva(listasimples *L)	{
	no *n=L->inicio;
	if(L->inicio==NULL){
		return NULL;
	}
	return 1+imprimir(n->prox);	
	
}	/0*8*/




listasimples *remover(listasimples *L, int valor) {

    // Primeiro verificamos se a lista esta vazia, pois se nao existir
    // nenhum elemento, nao temos nada para remover. Nesse caso, apenas retornamos a lista.
    if (L == NULL || L->inicio == NULL) {
        return L;
    }

    no *aux = L->inicio;
    no *ant = NULL;

    // Vamos percorrendo a lista com o aux ate encontrar o valor que queremos remover.
    // Enquanto isso, o ant vai guardando o endereco do no anterior.
    while (aux != NULL && aux->valor != valor) {
        ant = aux;
        aux = aux->prox;
    }

    // Se chegarmos ao fim da lista e nao encontrarmos o valor,
    // significa que ele nao existe, por isso retornamos a lista sem fazer alteracoes.
    if (aux == NULL) {
        return L;
    }

    // Se o ant continuar NULL, significa que o valor que procuramos
    // esta logo no inicio da lista, entao basta atualizar o inicio.
    if (ant == NULL) {
        L->inicio = aux->prox;
    } else {
        // Caso o valor esteja noutra posicao, fazemos o no anterior
        // passar a apontar para o no seguinte, deixando assim o no desejado de fora da lista.
        ant->prox = aux->prox;
    }

    // Depois da remocao, verificamos se a lista ficou vazia.
    // Se isso acontecer, o fim tambem deve passar a NULL.
    if (L->inicio == NULL) {
        L->fim = NULL;
    }

    // Verificamos tambem se o no removido era o ultimo da lista.
    // Caso seja, atualizamos o fim para apontar para o no anterior.
    if (aux == L->fim) {
        L->fim = ant;
    }


    free(aux);

    // Por fim, retornamos a lista com a remocao feita.
    return L;
}
