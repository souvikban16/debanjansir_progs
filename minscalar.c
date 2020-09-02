#include<stdio.h>
#include<math.h>

void asort(int *arr, int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1 ; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void dsort(int *arr, int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] < arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}



void main(){
	int n;
	scanf("%d", &n);
	int a[n];
	int b[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}
	
	asort(a, n);
	dsort(b, n);
	
	long long sum = 0;
	for(int i = 0; i < n; i++){
		//printf("%d %d\n", a[i], b[i]);
		sum += a[i] * b[i];
	}
	
	printf("%d", sum);
}
	
	
