#include <stdio.h>

int main(){

    int n;

    printf("digite: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int soma = 0;

        for (int c = 1; c < i; c++){
            if(i % c == 0){
                soma = soma + c;
            }
        }
        if (soma == i){
            printf(" %d é prerfeito", i);
        }
    } 
}