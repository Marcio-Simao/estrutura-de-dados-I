#include <stdio.h>

int main(){
    int v[5];

    for (int i = 0; i < 5; i++){
        printf("%dº posição: ", i);
        scanf("%d", &v[i]);
    }
    int maior = v[0], segMaior, encSegMaior = 0;
    for (int i = 0; i < 5; i++){
        if(v[i] < maior && encSegMaior == 0){
            segMaior = v[i];
            encSegMaior = 1;
        }else{ 
                if (v[i] < maior && v[i] > segMaior){
            segMaior = v[i];
            }else{
                if (v[i] > maior){
                    segMaior = maior;
                    maior = v[i];
                    encSegMaior = 1;        
                } 
            }
        }       
    }
}