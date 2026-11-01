#include <stdio.h>

int main(){
    char nomeCompleto[50];

    printf("Nome Completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    printf("Olá %s", nomeCompleto);
    printf("tem ", );
}