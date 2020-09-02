#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int flags[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		flags[i] = 0;
	}
	int counter = 0;
		
	for(int i = 0; i < n; i++){
		if(flags[i] == 0){
			for(int j = i + 1; j < n; j++){
				if(arr[i] == arr[j]){
					flags[i] = 1;
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		if(flags[i] == 0 ){
			counter++;
		}
	}

	printf("Unique Elements = %d", counter);
}
