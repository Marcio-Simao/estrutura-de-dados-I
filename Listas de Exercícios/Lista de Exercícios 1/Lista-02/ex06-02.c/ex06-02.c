#include <stdio.h> 
#include <math.h>
//Qunatos digitos o número tem
int QuantosDigitos(int n){
    int i = 0;
    while(n != 0){
        n = n / 10;
        i++;
    }
    return i;
}
// a soma de cada dígito elevado a k
int Soma(int n, int c){
    int s = 0;
    for (int i = 0; i < c; i++)
    {
        int mod;
        mod = n % 10;
        s = s + (int) pow(mod, c);
        n = n / 10;   
    }
    return s;
}
//Função principal
int main(){
    int count = 100000, k, soma = 0;

    for (int i = 1; i <= count; i++)
    {
        k = QuantosDigitos(i);
        soma = Soma(i, k);  
        if(soma == i){
            printf("\n O número %d é Armstrong! \n", soma);
        }  
    }
}