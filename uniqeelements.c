#include<stdio.h>

void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	int counter = 0;
	int flags[n];
	for(int i = 0; i < n; i++){
		flags[i] = 0;
	}
	
	for(int i = 0; i < n; i++){
		if(flags[i] == 0){
			counter++;
			int temp = 1;
			for(int j = i + 1; j < n; j++){
				if(arr[i] == arr[j]){
					flags[j] = temp++;
				}
			}
		}
	}
	int unique[counter];
	int count = 0;
	printf("Total unique elements = %d\n", counter);
	for(int i = 0; i < n; i++){
		if(flags[i] == 0){
			unique[count++] = arr[i];
		}
	}
	for(int i = 0; i < counter; i++ ){
		printf("%d ", unique[i]);
	}
}


