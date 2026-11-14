#include <stdio.h> 

int main(){
    int num, k = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    n = num;
    while(n != 0){
        n = n / 10;
        k++;
    }
    
    printf("\n O número %d tem %d digitos! \n", num, k);
}