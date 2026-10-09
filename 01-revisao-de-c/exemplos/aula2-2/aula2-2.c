#include <stdio.h>

int main(){
    int idade = 0;
    float peso = 0;

    printf("\n\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("-------------------\n");
    printf("Idade digitada: %d\n", idade);
    printf("Peso digitado: %.1f\n\n", peso);

}