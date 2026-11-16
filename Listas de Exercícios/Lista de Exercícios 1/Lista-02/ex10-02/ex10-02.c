#include <stdio.h>
int main(){
    int v[5], alvo;
    for (int i = 0; i < 5; i++){
        printf("%dº Posição: ",i);
        scanf("%d", &v[i]);
    }
    printf("Digite um número: ");
    scanf("%d",&alvo);

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if((v[i] + v[j]) == alvo){
                printf("Posição (%d ; %d)\n", i , j);
            }
        }
    }
}