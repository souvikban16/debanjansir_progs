#include<stdio.h>

	
void sort(int *arr, int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
	
void main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int m;
	scanf("%d", &m);
	int brr[m];
	for(int i = 0; i < m; i++ ){
		scanf("%d", &brr[i]);
	}
	//sorting arr
	sort(arr, n);
	sort(brr, m);
	int flag = 0;
	int i = 0;
	int j = 0;
	while(i < n && j < m){
		printf("%d %d\n", arr[i], brr[j]);
		if(arr[i] < brr[j]){
			i++;
		}
		else if (arr[i] > brr[j]){
			j++;
		}
		else if (arr[i] == brr[j]){
			flag = 1;
			break;
		}
	}
	if(flag)	printf("Disjoint");
	else	printf("Not Disjoint");
}

