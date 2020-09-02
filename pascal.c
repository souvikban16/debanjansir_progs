#include<stdio.h>

void main(){
	int n;
	printf("Enter the rows of the triangle");
	scanf("%d", &n);
	long long  mult = 1;
	int whitespace = n - 1;
	for(int i = 0; i < n; i++){
		int arr[1000];
		int counter = 0;
		long long temp;
		if(i == 0){
			temp = 1;
		}
		else{
			temp = mult * 11;
			mult *= 11;
		}
		while(temp){
			arr[counter++] = temp % 10;
			temp /= 10;
		}
		for(int j = 0; j < whitespace ; j++){
			printf(" ");
		}
		whitespace--;
		for(int j = 0; j < counter; j++){
			printf("%d ", arr[j]);
		}
		printf("\n");
	}
}
		
	
