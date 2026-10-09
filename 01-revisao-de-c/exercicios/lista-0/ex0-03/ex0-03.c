#include <stdio.h>

int main(){
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("\n--------------\n");
    printf(" *ANTES* \n");
    printf("a: %d\n", a);
    printf("b: %d", b);
    c = a;
    a = b;
    b = c;
    printf("\n--------------\n");
    printf(" *DEPOIS* \n");
    printf("a: %d\n", a);
    printf("b: %d\n\n", b);

}