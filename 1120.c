
#include <stdio.h>
#include <string.h>
int main()
{
    int i, flag;
    char d, n[1000];
    while(1){
        flag = 0;
        scanf(" %c", &d);
        scanf("%s", n);
        if(d == '0' && strlen(n) == 1 && n[0] == '0') break;
            for(i=0; i<strlen(n); i++){
                if(n[i] != d && n[i] != '0') {
                    flag = 1;
                    break;
                }
                if(flag == 0 && n[i] == '0') n[i] = '*';
            }
            if(flag == 0){
                printf("0\n");
            } else{
                for(i=0; i<strlen(n); i++){
                    if(n[i] != d && n[i] != '*'){
                        printf("%c", n[i]);
                    }
                }
                printf("\n");
            }
    };

    return 0;
}
