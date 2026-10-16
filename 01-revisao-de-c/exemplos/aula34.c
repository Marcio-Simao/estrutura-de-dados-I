#include <stdio.h>

int pot(int x, int y){
    if (y==0)
    {
        return 1;
    }
    return x * pot(x, y-1);
    
}

int main(){
    int a, b, h;
    
    printf("Digite a base: ");
    scanf("%d",&a);

    printf("digite o expoente: ");
    scanf("%d", &b);

    printf("Res: %d", h);
}