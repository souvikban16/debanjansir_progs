#include<stdio.h>

void main()
{
	int n;
	printf("Enter a number to check for harshad number");
	scanf("%d",&n);
	int temp=n;
	int sum=0;
	while(temp>0)
	{
		int w=temp%10;
		sum+=w;
		temp/=10;
	}
	
	if(n%sum==0)
	{
		printf("Harshad number");
	}
	else
	{
		printf("NOT a harshad number");
	}
			
}
