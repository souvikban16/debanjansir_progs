#include<stdio.h>

int main()
{
	int n;
	printf("Enter the decimal number=");
	scanf("%d",&n);
	int bin=0;
	while(n!=0)
	{
		bin=bin+10*(n%2);
		n=n/2;
	}
	
	printf("binary equivalent=%d",bin);
	return 0;
}
	
