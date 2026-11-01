#include <stdio.h>
#include <string.h>
int main(){
    char nomeCompleto[50];
    char nome [50];
    printf("Nome Completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
    
    int tamanho = strlen(nomeCompleto);
    
    printf("Olá %s", nomeCompleto);
    printf("tem %d", tamanho);
}