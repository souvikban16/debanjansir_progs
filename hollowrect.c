#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	//header
	for(int i = 0; i < n; i++){
		printf("*");
	}
	printf("\n");

	// body
	int temp = n - 2;

	for(int i = 0; i < temp; i++){
		for(int j = 0; j < n; j++){
			if(j == 0 || j == n - 1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}



	//footer
	for(int i = 0; i < n; i++){
		printf("*");
	}
	printf("\n");
}