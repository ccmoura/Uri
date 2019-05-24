#include <stdio.h>
#include <string.h>
int main(){
    int cases = 0, x, i;
    char A[1000], B[1000];

    scanf("%d", &cases);
    while( cases > 0 ){
        fflush(stdin);
        scanf("%s %s", A, B);
        x = 0;
        for(i = strlen(B); i>0; i--){
            if(A[strlen(A)-1-x] != B[i-1]){
                x = -1;
                break;
            } else{
                x++;
            }
        }
        if(x == -1){
            printf("nao encaixa\n");
        } else{
            printf("encaixa\n");
        }
        cases--;
    }

    return 0;
}