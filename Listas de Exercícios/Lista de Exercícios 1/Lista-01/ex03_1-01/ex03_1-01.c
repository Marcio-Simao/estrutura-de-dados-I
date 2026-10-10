#include <stdio.h>

int main(){
    
    int a,b,c;

    printf("\n\nDigite o valor de a: ");
    scanf("%d",&a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Antes: a = %d ; b = %d\n", a, b);
    c = a;
    a = b;
    b = c;

    printf("Depois: a = %d ; b = %d\n\n", a,b);

    return 0;
}