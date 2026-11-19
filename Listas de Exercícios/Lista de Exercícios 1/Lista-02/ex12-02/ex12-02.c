#include <stdio.h>

int main(){
    int v[5], aux, posicao = 0;

    for (int i = 0; i < 5; i++){
        printf("%dº Posição: ", i);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 5; i++){
        if (v[i] != 0){
            aux = v[posicao];
            v[posicao] = v[i];
            v[i] = aux;
            posicao++; 
        }
    }
    printf("\n\n");
    for (int i = 0; i < 5; i++){
        printf("%dº Posição: %d \n", i, v[i]);
    } 
}