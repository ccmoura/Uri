
#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, count, one, two;
    char m[6];
    scanf("%d", &n);
    for(; n>0; n--){
        scanf("%s", m);
        if(strlen(m) == 5){
            printf("3\n");
        } else{
            one = 0;
            two = 0;
            count = 0;
            for(i=0; i<3; i++){ // one
                if(count <= 1){
                    if(i == 0 && m[i] != 'o'){
                        ++count;
                    } else if(i == 1 && m[i] != 'n'){
                        ++count;
                    } else if(i == 2 && m[i] != 'e'){
                        ++count;
                    }
                }
            }
            if(count > 1){
                count = 0;
                for(i=0; i<3; i++){ // two
                    if(count <= 1){
                        if(i == 0 && m[i] != 't'){
                            ++count;
                        } else if(i == 1 && m[i] != 'w'){
                            ++count;
                        } else if(i == 2 && m[i] != 'o'){
                            ++count;
                        }
                    }
                }
            printf("2\n");
            } else{
                printf("1\n");
            }
        }
    }

    return 0;
}
