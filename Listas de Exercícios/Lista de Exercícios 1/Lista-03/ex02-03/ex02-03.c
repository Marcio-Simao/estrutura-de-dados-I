#include <stdio.h>

int maior(int vet[]){
    int maior = 0;
    for (int i = 0; i < 5; i++){

        if(vet[i] > maior){
        maior = vet[i];
    }
    }
    return maior;
}

int main(){
    int vetor[5];
    int m;
    for (int i = 0; i < 5; i++){
        printf("\nvetor[%dº]: ",i);
        scanf("%d", &vetor[i]);
    }
    m = maior(vetor);
    printf("\nMaior número: %d", m);
}