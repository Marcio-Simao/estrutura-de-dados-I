#include <stdio.h>

int main(){
    int num1, num2, valido = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    if(num1 >= 0 && num1 < 23){
        printf("hora valida!\n");
        valido = 1;
    }else{
        printf("hora invalida!\n");
        valido = 0;
    }
    
    if(num2 >= 0 && num2 <= 59){
        printf("minuto valido!\n"); 
        valido = 1;   
    }else{
        printf("minuto invalido!\n");
        valido = 0;
    }

    if(valido == 1){
        if(num1 >= 0 && num1 <= 11){
            printf("Manhã");
        }else{
            if(num1 >= 12 && num1 <= 17){
                printf("tarde");
            }else{
                printf("Noite");    
            } 
        }

    }

    
}