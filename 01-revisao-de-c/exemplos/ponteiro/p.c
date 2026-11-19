#include <stdio.h>

int main() {
    int idade = 21;

    int *p = &idade;

    printf("Valor de idade: %d\n", idade);
    printf("Endereco de idade: %p\n", &idade);
    printf("Endereco guardado em p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}