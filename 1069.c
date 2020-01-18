#include <stdio.h>
#include <string.h>
int main()
{
    int x, y, n, i;
    char k[1001];
    scanf("%d", &n);
    
    for(; n>0; --n){
        x = 0;
        y = 0;
        scanf("%s", k);
        
        for(i=0; i<strlen(k); i++){
            if(k[i] == '<'){
                ++x;
            } else if(k[i] == '>' && x>0){
                --x;
                ++y;
            }
        }
        printf("%d\n", y);
    }

    return 0;
}
