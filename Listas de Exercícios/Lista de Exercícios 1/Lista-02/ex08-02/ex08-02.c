#include <stdio.h>

int main(){
    int v1[5], v2[5] = {0, 0, 0, 0, 0};
    int c = 0, repetido = 0;
    for (int i = 0; i < 5; i++){
        printf("%dº Posição: ", i);
        scanf("%d", &v1[i]);
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < c; j++){
            if (v1[i] == v2[j]){
                repetido = 1;
            }
        }
        if (repetido == 0){
            v2[c] = v1[i];
            c++;
        } 
        repetido = 0;
    }
    printf("\nsegundo vetor\n");
    for (int i = 0; i < c; i++){
        printf("\n%dº posição %d\n", i, v2[i]);
    }
}