#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int len[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int ans = -1;
	int anslen = 0;
	
	for(int i = 0; i < n; i++){
		int temp = arr[i];
		int sum = 0;
		int flag = 0;
		int counter = 0;
		while(temp){
			int w = temp % 10;
			temp /= 10;
			sum = sum * 10 + w;
			counter++;
		}
		
		if(sum == arr[i]){
			if(ans == -1){
				ans = arr[i];
				
			}
			else{
				if(counter > anslen){
					ans = arr[i];
					anslen = counter;
				}
			}
		}
	}
	printf("Longest Palindrome = %d", ans);
}

