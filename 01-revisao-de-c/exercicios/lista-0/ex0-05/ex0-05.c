#include <stdio.h>

int par(int n){
    if(n % 2 == 0){
        return 1;
    }
}

int main(){
    int num, ver;
    for (int i = 1; i <= 100; i++){
        ver = par(i);
        if(ver == 1){
            printf("%d\n",i);
        }
    } 
}