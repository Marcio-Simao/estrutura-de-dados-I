#include <stdio.h>
#include <stdlib.h>
#include "TAD.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

    listasimples *L = listasimples_criar();

    int op,valor;

    do {

        printf("\n++++++++++++++++++++++   M E N U   +++++++++++++++++++++\n");
        printf("[ 1 ] INSERIR NO INICIO DA LISTA\n");
        printf("[ 2 ] INSERIR NO FIM DA LISTA\n");
        printf("[ 3 ] REMOVER UM ELEMENTO QUALQUER DA LISTA\n");
        printf("[ 4 ] IMPRIMIR OS ELEMENTOS DA LISTA\n");
        printf("[ 0 ] SAIR  \n");
        printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

        printf(" O QUE DESEJA?    ");
        scanf("%d", &op);

        switch (op) {

            case 1:

                printf("Digite o valor que deseja inserir: ");
                scanf("%d", &valor);

                L = inserirIni(L, valor);

                break;

            case 2:

                printf("Digite o valor que deseja inserir: ");
                scanf("%d", &valor);

                L = inserirFim(L, valor);

                break;

            case 3:

                printf("Digite o valor que deseja remover: ");
                scanf("%d", &valor);

                L = remover(L, valor);

                break;

            case 4:

                printf("\nElementos da lista:\n");
                imprimir(L);

                break;

     

            case 0:

                printf("\n BYE BYE ");

                break;

        }

    } while (op!=0);

    return 0;
}



