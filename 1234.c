
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sentence[51];
    int i, flag ;
    while(scanf("%[^\n]s", sentence) != EOF){
        getchar();
        int lenS = (int)strlen(sentence);
        flag = 1;
        for(i = 0; i<lenS; i++){
            if(sentence[i] != ' '){
                if(flag == 0){
                    sentence[i] = tolower(sentence[i]);
                    flag = 1;
                } else{
                    sentence[i] = toupper(sentence[i]);
                    flag = 0;
                }
            }
        }
        sentence[lenS] = '\0';
        printf("%s\n", sentence);
    }
    return 0;
}
