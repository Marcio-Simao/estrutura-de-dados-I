#include <stdio.h>

int main(){
    int n, i = 1;
    int rest, bi = 0;

    printf("\n Digite um número: ");
    scanf("%d", &n);

    while (n != 0)
    {
       rest = n % 2;
       bi = bi + (rest * i);  
       n = n / 2;
       i = i * 10;
    }
    printf("\n Decimal: %d \n", n);
    printf("\n Binario: %d \n", bi);    
}