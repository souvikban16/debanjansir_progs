#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int w = n - 1;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < w; j++){
			printf(" ");
		}
		w--;
		for(int j = 0; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}
}