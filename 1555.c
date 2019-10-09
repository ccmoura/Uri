#include <stdio.h>
void main(){
	int r = 0, b = 0, c = 0, N = 0, x = 0, y = 0;

	scanf("%d", &N);
	while(N>0){
		scanf("%d %d", &x, &y);
		r = (3*x)*(3*x) + y*y;
		b = 2*(x*x) + (5*y)*(5*y);
		c = -100*x + y*y*y;
		if(r > b && r > c){
			printf("Rafael ganhou\n");
		} else if(b > r && b > c){
			printf("Beto ganhou\n");
		} else{
			printf("Carlos ganhou\n");
		}
		N--;
	}		
}