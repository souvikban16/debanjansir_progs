#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++ ){
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	
	for(int i = 1; i < n; i++){
		if(min > arr[i]){
			min = arr[i];
		}
		
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("Minimum = %d Maximum = %d", min, max);
}
			
