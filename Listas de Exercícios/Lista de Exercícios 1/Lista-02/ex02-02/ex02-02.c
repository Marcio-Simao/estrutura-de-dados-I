#include <stdio.h>

int main(){
    int n, soma = 0;

    printf("Numero: ");
    scanf("%d"&n);

    for (int i = 1; soma >= n; i+2)
    {
        soma += i;    

    }
    if (soma == n)
    {
        printf("quadrado perfeito")   
    }
    else
    {
        printf("Não é um quadrado perfeito");
    }
    
    

}