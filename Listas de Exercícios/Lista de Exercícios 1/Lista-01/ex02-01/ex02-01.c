#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    
    printf("\n\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("Media: %.2f\n\n", media);

    return 0;

}