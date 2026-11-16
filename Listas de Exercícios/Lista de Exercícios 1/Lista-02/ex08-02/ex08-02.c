#include <stdio.h>

int main(){
    int v[6];
    int aux, j = 5;

    for (int i = 0; i < 6; i++){
        printf("Digite o valor da %dº posição: ", i);
        scanf("%d", &v[i]);
    }
    for(int i = 0; i < 6; i++){
        printf("%dº Posição: %d\n", i, v[i]);
    }
    for (int i = 0; i < j; i++){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
        j--;
    }
    printf("\n I N V E R T I D O \n");
    for(int i = 0; i < 6; i++){
        
        printf("%dº Posição: %d\n", i, v[i]);
    }   
}