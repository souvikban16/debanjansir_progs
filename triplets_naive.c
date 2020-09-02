#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	scanf("%d", &sum);
	
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				if(arr[i] + arr[j] + arr[k] == sum){
					printf("%d %d %d\n", arr[i], arr[j], arr[k]);
				}
			}
		}
	}
	
}
