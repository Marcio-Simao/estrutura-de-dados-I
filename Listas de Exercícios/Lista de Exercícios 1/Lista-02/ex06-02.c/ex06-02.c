#include <stdio.h> 

int Digitos(int n){
    int i = 0;
    while(n != 0){
        n = n / 10;
        i++;
    }
    return i;
}

int main(){
    int num, k;

    printf("Digite um número: ");
    scanf("%d", &num);
    k = Digitos(num);
    printf("\n O número %d tem %d digitos! \n", num, k);
}