#include <stdio.h>

int main() {
    // Declara um vetor de char com tamanho 50 (espaço para até 49 letras + o terminador '\0')
    char nome[50];

    printf("Qual e o seu nome? ");
    
    // Lê o nome digitado pelo usuário (incluindo espaços)
    fgets(nome, sizeof(nome), stdin);

    printf("Ola, %s", nome);

    return 0;
}