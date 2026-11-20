#include <string.h>
int ehPalindromo(const char *s){
    if (s == NULL) {
    return 0;
    }
    if(*s == '\0'){
        return 1; 
    }
    const char *inicio = s;
    const char *fim = s + (strlen(s)-1);
    int m = strlen(s) / 2;
    for (int i = 0; i < m; i++){
        if((*(inicio + i) != (*(fim - i)))){
            return 0;
        }
    }
    return 1;
}