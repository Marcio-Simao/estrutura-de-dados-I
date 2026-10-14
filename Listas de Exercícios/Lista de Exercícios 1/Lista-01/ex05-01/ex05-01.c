#include <stdio.h>

int main(){
    float salario, imposto;

    printf("Digite o salario do funcionario: ");
    scanf("%f",&salario);

    if (salario >= 10000 && salario <= 100000){
        printf("isento do imposto");        
    }else{
        if (salario >= 100001 && salario <= 300000){
            imposto = salario * 0.1;
            printf("imposto a ser pago: %.2f",imposto); 
        }else{
            imposto = salario * 0.2;
            printf("imposto a ser pago: %.2f",imposto);
        }
    }
}