#include <stdio.h>

int main(){
    int idade = 0;
    float peso = 0;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Idade digitada: %d.\n", idade);
    printf("Peso digitado: %f.\n", peso);

}