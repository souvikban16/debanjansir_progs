#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int even = 0, odd = 0;
	for(int i = 0; i < n; i++){
		int temp;
		scanf("%d", &temp);
		if(temp % 2 == 0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("Odd = %d Even = %d", odd, even);
}

	
