#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int n, i, metade;
    scanf("%d", &n);
    getchar();
    for(; n>0; --n){
        gets(s);
        metade = strlen(s)/2-1;
        for(i = metade; i>=0; i--)
            printf("%c", s[i]);
        for(i = strlen(s)-1; i>metade; i--)
            printf("%c", s[i]);
        printf("\n");
    }

    return 0;
}
