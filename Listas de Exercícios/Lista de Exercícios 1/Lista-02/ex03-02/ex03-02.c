#include <stdio.h>

int main(){
    int n, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);
    
    while (n != 0)
    {
       soma = soma + (n % 10); 
       n = n / 10;
    }

    printf("Soma %d", soma);
    
}