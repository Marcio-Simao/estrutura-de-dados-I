#include <stdio.h>

int main(){
    float base, altura, area, p;
    
    printf("\n\nDigite a base: ");
    scanf("%f", &base);
    
    printf("Digite a aaltura: ");    
    scanf("%f",&altura);

    area = base * altura;
    p = 2 * (base + altura);

    printf("Area: %.1f", area);
    printf("\nperimetro: %.1f\n\n", p);

}