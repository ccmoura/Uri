
#include <stdio.h>
#include <string.h>
int main()
{
    int i, c;
    char s[1001];
    
    
    while(scanf("%s", s) != EOF){
        c=0;
        for(i=0; i<strlen(s); i++){
            if(s[i] == ')'){
                if(c == 0){
                    c=-1;
                    break; 
                } else{
                    --c;
                }
            } else if(s[i] == '('){
                ++c;
            }
        }
        if(c == 0){
            printf("correct\n");
        } else{
            printf("incorrect\n");
        }
    }

    return 0;
}

