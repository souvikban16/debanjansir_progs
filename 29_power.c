#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the base and the exponent");
	scanf("%d %d",&a,&b);
	int result=1;
	for(int i=1;i<=b;i++)
	{
		result*=a;
	}
	printf("Result=%d",result);
	return 0;
	
}

