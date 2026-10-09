#include <stdio.h>

int main(){
    float base, altura, area, p; 

    printf("\n\nDigite a base: ");
    scanf("%f", &base);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = base * altura;
    p = 2 * (base + altura);

    printf("Area: %f\n", area);
    printf("perimetro: %f\n\n", p);
}