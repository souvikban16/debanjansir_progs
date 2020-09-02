#include<stdio.h>

void main (){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0;i < n; i++){
		scanf("%d", &arr[i]);
	}
	int sum = 0;
	scanf("%d", &sum);
	
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	for(int i = 0; i < n - 2; i++){
		int j = i + 1;
		int k = n - 1;
		while(j < k){
			if(arr[i] + arr[j] + arr[k]  == sum ){
				printf("%d %d %d\n", arr[i], arr[j], arr[k]);
				j++;
				k--;
			}
			else if(arr[i] + arr[j] + arr[k] > sum ){
				k--;
			}
			else if(arr[i] + arr[j] + arr[k] < sum){
				j++;
			}
		}
	}
}
