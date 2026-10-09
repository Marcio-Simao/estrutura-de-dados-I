#include <stdio.h>

int main(){
    int num1, num2;
    int valida = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    if((num1 >= 0) && (num1 <= 23)){
        printf("Hora valida!");
        
        if ((num2 >= 0) && (num2 <= 60)){
            printf("Minuto valido!");
            valida = 1;
        }
        else{
            printf("Minuto invalido");
        }
        
    }
    else{
        printf("valores invalidos!");
    }

    

    }

}