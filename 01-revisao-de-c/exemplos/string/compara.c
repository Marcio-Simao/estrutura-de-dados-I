#include <stdio.h>
#include <string.h>

int main() {
    char senhaSalva[] = "admin123";
    char senhaDigitada[] = "admin123";

    // O strcmp retorna 0 se forem iguais
    if (strcmp(senhaSalva, senhaDigitada) == 0) {
        printf("Acesso liberado!\n");
    } else {
        printf("Senha incorreta!\n");
    }
    return 0;
}