#include <stdio.h> 

int QuantosDigitos(int n){
    int i = 0;
    while(n != 0){
        n = n / 10;
        printf("%d\n", n);
        i++;
    }
    return i;
}

int main(){
    int num, k, soma;

    printf("Digite um número: ");
    scanf("%d", &num);
    k = QuantosDigitos(num);
    printf("\n O número %d tem %d digitos! \n", num, k);
    
    



}