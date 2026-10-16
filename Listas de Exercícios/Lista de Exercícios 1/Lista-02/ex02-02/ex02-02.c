#include <stdio.h>

int main(){
    int n, soma = 0;

    printf("Numero: ");
    scanf("%d",&n);

    for (int i = 1; n > soma; i += 2)
    {
        soma += i;    
    }
    if (soma == n)
    {
        printf("quadrado perfeito\n");   
    }
    else
    {
        printf("Nao e um quadrado perfeito\n");
    }
}