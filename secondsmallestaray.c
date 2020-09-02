#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	
	int ssmall = arr[0];
	int small = arr[1];
	
	if(ssmall < small){
		int temp = small;
		small = ssmall;
		ssmall = temp;
	}
	
	for(int i = 2; i < n; i++){
		if (small > arr[i]){
			ssmall = small;
			small = arr[i];
		}
	}
	
	printf("%d", ssmall);
}
