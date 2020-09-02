#include<stdio.h>

long long  factorial(int n){
	long long ans = 1;
	for(int i = 1; i <= n; i++){
		ans *= i;
	}
	return ans;
}

void main(){
	// for now let's just calculate number of permutations
	int n;
	int r;
	printf("Enter the value of p and r\n");
	scanf("%d%d", &n, &r);

	long long ans = factorial(n) / factorial (n - r);
	printf("The answer is = %d", ans );


}