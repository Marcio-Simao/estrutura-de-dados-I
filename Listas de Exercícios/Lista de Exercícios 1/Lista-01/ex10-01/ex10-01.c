#include <stdio.h>
#include <string.h>

int main(){
    char nomeCompleto[50];
    int quantLetra = 0;

    printf("Nome Completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);

    nomeCompleto[strcspn(nomeCompleto, "\n")] = '\0';

    int tamnho = strlen(nomeCompleto);

    for (int i = 0; nomeCompleto[i] != '\0'; i++)
    {
        if (nomeCompleto[i] != ' ')
        {
            quantLetra++;
        }
        
    }
    
    printf("Olá %s \n", nomeCompleto);
    printf("Tem %d letras\n", quantLetra);
    
    return 0;
}