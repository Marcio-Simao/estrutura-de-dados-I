#include <stdio.h>

int main(){
    int maior = 0, i = 0, num;
    while (i <= 10)
    {
        printf("Digite um número: ");
        scanf("%d", &num);
        if(i == 0){
            maior = num;
        }else{
            if (num > maior){
                maior = num;
            }
        }
        i++;
    }
    printf("\nO maior número é: %d\n", maior);
}