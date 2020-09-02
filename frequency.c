#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int unique[n];
	int freq[n];
	int counter = 0;
	int flags[n];
	for(int i = 0; i < n; i++){
		flags[i] = 0;
	}
	for(int i = 0; i < n; i++){
		if(flags[i] == 0){
			//printf("%d\n", arr[i]);
			int temp = 1;
			unique[counter] = arr[i];
			for(int j = i + 1; j < n; j++){
				if(arr[i] == arr[j]){
					flags[j] = 1;
					temp++;
				}
			}
			freq[counter++] = temp;
		}
	}
	
	for(int i = 0; i < counter; i++){
		printf("%d = %d \n", unique[i], freq[i]);
	}
}

		
