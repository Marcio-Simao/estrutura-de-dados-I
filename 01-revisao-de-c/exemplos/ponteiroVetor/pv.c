#include <stdio.h>
#include <stdlib.h>

int main() {

    int *numeros;

    numeros = malloc(5 * sizeof(int));

    for(int i = 0; i < 7; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < 7; i++) {
        printf("%d ", numeros[i]);
    }

    free(numeros);

    return 0;
}