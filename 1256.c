#include <stdio.h>
#include <stdlib.h>
typedef struct v{
    int num;
    struct vetor *prox;
}vetor;
void startHash(vetor *hash, int M){
    int i;
    for(i=0; i<M; i++){
        hash[i].num = 0;
        hash[i].prox = NULL;
    }
}
void insertHash(vetor *hash, int M){
    int key;
    scanf("%d", &key);
    if(hash[h(key, M)].num == 0){
        hash[h(key, M)].num = key;
    } else{
        vetor *p, *aux;
        aux =(vetor*) hash[h(key,M)].prox;
        p = malloc(sizeof(vetor));
        p->num = key;
        if(hash[h(key,M)].prox == NULL){
            p->prox = hash[h(key, M)].prox;
            hash[h(key, M)].prox = p;
        } else{
            while(aux->prox != NULL){
                aux = aux->prox;
            };
            aux->prox = p;
            p->prox = NULL;
        }
    }
}
int h(int key, int M){
    return key%M;
}
void showHash(vetor *hash, int M){
    int i;
    vetor *p;
    for(i=0; i<M; i++){
        if(hash[i].num == 0){
            printf("%d -> \\\n", i);
        } else{
            printf("%d -> %d -> ", i, hash[i].num);
            p = (vetor *)hash[i].prox;
            while(p != NULL){
                printf("%d -> ", p->num);
                p=(vetor *)p->prox;
            }
            printf("\\\n");
        }
    }
}
int main(){
    int N;  // variavel de controle de casos
    int i;
    int M, C;   // M = qtd de enderecos base, C = qtd de chaves
    scanf("%d", &N);
    while(N>0){ // loop de casos
        i=0;
        scanf ("%d %d", &M, &C);
        vetor hash[M];
        startHash(hash, M);
        for(; C>0; C--){    // insere C elementos na hash
            insertHash(hash, M);
        }
        showHash(hash, M);
        N--;
        if(N > 0) printf("\n");
    }
}
