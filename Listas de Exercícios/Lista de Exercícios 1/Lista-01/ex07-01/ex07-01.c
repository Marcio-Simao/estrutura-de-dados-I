#include <stdio.h>

int main(){
    int cont = 10;

    for (int i = 1; i <= 10; i++){
        printf("%d\n",i);   
    }
    printf("\n");
    while (cont >= 1){
        printf("%d\n",cont);
        cont--;   
    }
}