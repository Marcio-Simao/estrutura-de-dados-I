int *maximo(int *v, int n){
    int maior;
    int *endMaior = NULL;
    for (int i = 0; i < n; i++){
        if (i == 0){
            maior = *(v + i);
            endMaior = v + i;
        }else if (maior < *(v + i)){
            maior = *(v + i);
            endMaior = v + 1;
        }
    }
}