#include <stdio.h>

int main(){
    float m;
    int i = 1, temp;

    printf("Massa: ");
    scanf("%f", &m);

    while (m >= 0.8)
    {
        m = m / 2;
        i++;
    }

    temp = 110 * i;
    printf("Tempo %");
}