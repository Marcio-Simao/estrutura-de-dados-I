#include <stdio.h>

int main(){
    int n, soma = 0;

    printf("Numero: ");
    scanf("%d",&n);

    for (int i = 1; n > soma; i += 2)
    {
        printf("soma: %d\n", soma);
        soma += i;    
    }
    printf("O resultado final da soma: %d\n", soma);
    if (soma == n)
    {
        printf("quadrado perfeito\n");   
    }
    else
    {
        printf("Nao e um quadrado perfeito\n");
    }
    
    

}