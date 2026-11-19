char *encriptacao(char *s, char c){
    int i = 0;
    while(*(s + i) != '\0'){
        if ((*(s + i) == 'a') || (*(s + i) == 'A')){
            *(s + i) = c;
        }else if ( (* (s + i) == 'e') || ( *(s + i) == 'E')){
            *(s + i) = c;    
        }else if ( (* (s + i) == 'i') || ( *(s + i) == 'I')){
            *(s + i) = c;    
        }else if ( (* (s + i) == 'o') || ( *(s + i) == 'O')){
            *(s + i) = c;    
        }else if ( (* (s + i) == 'u') || ( *(s + i) == 'U')){
            *(s + i) = c;    
        }
        i++;
    }
    return s;
}