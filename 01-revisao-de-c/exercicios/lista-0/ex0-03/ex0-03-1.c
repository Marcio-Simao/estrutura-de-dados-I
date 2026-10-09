#include <stdio.h>

int main(){
    int a,b;

    printf("\n\na: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d", &b);

    printf("\n--------------\n");
    printf(" *ANTES* \n");
    printf("a: %d\n", a);
    printf("b: %d", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\n--------------\n");
    printf(" *DEPOIS* \n");
    printf("a: %d\n", a);
    printf("b: %d\n\n", b);
    
}