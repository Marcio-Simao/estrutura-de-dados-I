#include <stdio.h> 

int main(){
    int n, k = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    while(n != 0){
        n = n / 10
        k++;
    }
    
    printf("\n O número %d tem %d digitos! \n", n, k);
}