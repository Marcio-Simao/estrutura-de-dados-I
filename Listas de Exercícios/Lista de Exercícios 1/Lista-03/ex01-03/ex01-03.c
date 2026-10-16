#include <stdio.h>

int primo(int num){
    for (int i = 2; i < num - 1; i++)
    {
        if (num % i == 0){
            i == num - 1;
            return 0;
        }else{
            return 1;
        } 
    }
    

}

int main(){
    int n,r;

    printf("\nDigite um numero: ");
    scanf("%d",&n);
    r = primo(n);
    if(r == 1){
        printf("O numero e primo!\n");
    }else{
        printf("Nao e um numero primo!\n");
    }
    printf()
}