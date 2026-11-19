#include <stdio.h>

int main(){
    int v[5];
    int maior = v[0], segMaior, encSegMaior = 0;

    for (int i = 0; i < 5; i++){
        printf("%dº posição: ");
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 5; i++){
        if(v[i] < maior && encSegMaior == 0){
            segMaior = v[i];
            encSegMaior = 1;
        }
        if (v[i] < maior && v[i] > segMaior){
            segMaior = v[i];
        }
        if (v[i] > maior){
            segMaior = maior;
            maior = v[i];        
        }        
    }
}