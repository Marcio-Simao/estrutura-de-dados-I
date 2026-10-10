#include <stdio.h>

int main(){
    int a,b;

    printf("Digite o valor de a: ");
    scanf("%d",&a);

    printf("Digite o valor de b: ");
    scanf("%d",&b);

    printf("Anates: a = %d; b = %d \n", a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Depois: a = %d; b = %d",a,b);

    return 0;
}