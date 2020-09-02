#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int counter = 1;
	int linecounter = 1;
	int flag = 1;
	while(flag){
		for(int i = 0; i < linecounter; i++){
			printf("%d ", counter++);
			if(counter > n){
				flag = 0;
				break;
			}
		}
		printf("\n");
		linecounter++;
	}
}
