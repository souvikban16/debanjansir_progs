#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int brr[n];
	for(int i = 0; i < n; i++){
		scanf("%d%d", &arr[i], &brr[i]);
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(arr[i] == brr[j] && arr[j] == brr[i]){
				ans ++;
			}
		}
	}
	
	printf("%d", ans);
}
	
