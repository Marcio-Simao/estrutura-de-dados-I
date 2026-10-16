#include <stdio.h>

int main(){
    int n1, n2, opera;

    printf("primeiro numero: ");
    scanf("%d", &n1);

    printf("segundo numero: ");
    scanf("%d", &n2);

    printf("\n----------");
    printf("\noperador");
    printf("\n+ -> 1"); 
    printf("\n- -> 2");
    printf("\n* -> 3"); 
    printf("\n/ -> 4");
    printf("\nEscolha: ");
    scanf("%d", opera);

    switch (opera)
    {
    case 1:
        printf("%d + %d = %d", n1,n2, n1 + n2);
    break;
    case 2:
        printf("%d + %d = %d", n1,n2, n1 - n2);
    break;
    case 3:
        printf("%d + %d = %d", n1,n2, n1 * n2);
    break;
    case 4:
        printf("%d + %d = %d", n1,n2, n1 / n2);
    break;
    default:
        printf("Valor incorreto");
    break;
    }
    
}