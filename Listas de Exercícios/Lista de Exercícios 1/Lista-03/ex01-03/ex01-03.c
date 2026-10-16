#include <stdio.h>

int primo(int num){
    int cont = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0){
            cont++;
        } 
    }
    if (cont > 2)
    {
        return 0;
    }else{
        return 1;
    }
    
}

int main(){
    int n,r;

    printf("\nDigite um numero: ");
    scanf("%d",&n);
    r = primo(n);
    if(r == 1){
        printf("\nO numero %d é primo!\n",n);
    }else{
        printf("\nO numero %d não é primo!\n", n);
    }
    printf("\n");
}