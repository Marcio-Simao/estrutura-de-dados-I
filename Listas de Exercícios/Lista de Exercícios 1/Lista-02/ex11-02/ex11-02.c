#include <stdio.h>

int main(){
    int v[5];

    for (int i = 0; i < 5; i++){
        printf("%dº posição: ", i);
        scanf("%d", &v[i]);
    }
    int maior = v[0], segMaior, encSegMaior = 0;
    for (int i = 0; i < 5; i++){
        if (v[i] > maior) {
            // novo maior
            segMaior = maior;
            maior = v[i];
            encSegMaior = 1;
        }else if (v[i] < maior && encSegMaior == 0) {
            // primeiro segundo maior encontrado
            segMaior = v[i];
            encSegMaior = 1;
        }else if (v[i] < maior && v[i] > segMaior) {
            // atualizar segundo maior
            segMaior = v[i];
        }      
    }
    printf("o segundo maior valor é %d\n", segMaior);
}