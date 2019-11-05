#include <stdio.h>
void main(){
	int n = 1, i, mary=0, john=0, j;
	while(n){
	    mary = 0;
	    john = 0;
		scanf("%d", &n);
		if (n == 0) break;
		for(i=0; i<n; i++){
		    scanf("%d", &j);
		    if(j == 0) {
		        ++mary;
		    } else if(j == 1){
		        ++john;
		    }
		}
		printf("Mary won %d times and John won %d times\n", mary, john);
	}
	
}