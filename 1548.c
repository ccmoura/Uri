#include <stdio.h>
#include <stdlib.h>
void merge(int vetor[], int comeco, int meio, int fim) {
    int com1 = comeco, com2 = meio+1, comAux = 0, tam = fim-comeco+1;
    int *vetAux;
    vetAux = (int*)malloc(tam * sizeof(int));

    while(com1 <= meio && com2 <= fim){
        if(vetor[com1] < vetor[com2]) {
            vetAux[comAux] = vetor[com1];
            com1++;
        } else {
            vetAux[comAux] = vetor[com2];
            com2++;
        }
        comAux++;
    }

    while(com1 <= meio){
        vetAux[comAux] = vetor[com1];
        comAux++;
        com1++;
    }

    while(com2 <= fim) {
        vetAux[comAux] = vetor[com2];
        comAux++;
        com2++;
    }

    for(comAux = comeco; comAux <= fim; comAux++){
        vetor[comAux] = vetAux[comAux-comeco];
    }
    
    free(vetAux);
}

void mergeSort(int vetor[], int comeco, int fim){
    if (comeco < fim) {
        int meio = (fim+comeco)/2;

        mergeSort(vetor, comeco, meio);
        mergeSort(vetor, meio+1, fim);
        merge(vetor, comeco, meio, fim);
    }
}
int main(){
    int i, j, cases = 0, students = 0, notChanged;
    int vector[1000], sortedVector[1000];
    scanf("%d", &cases);

    while(cases > 0){
        scanf("%d", &students);
        
        for(i=0; i<students; i++){
            scanf("%d", &vector[i]);
            sortedVector[i] = vector[i];
        }
        mergeSort(sortedVector, 0, students-1);
        notChanged = 0;
        j=0;
        for(i=students-1; i>=0; i--){
            if(vector[j] == sortedVector[i]){
                notChanged++;
            }
            j++;
        }
        printf("%d\n", notChanged);
        cases--;
    }
    return 0;
}