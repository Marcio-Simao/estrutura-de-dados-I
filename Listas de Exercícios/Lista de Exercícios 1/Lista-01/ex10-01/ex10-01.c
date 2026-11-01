#include <stdio.h>
#include <string.h>
int main(){
    char nomeCompleto[50];
    char nome [50];
    printf("Nome Completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
    
    int tamanho = strlen(nomeCompleto);

    for (int i = 0; i < tamanho; i++)
    {
        
    }
    
    
    printf("Olá %s", nomeCompleto);
    printf("tem %d", tamanho);
}