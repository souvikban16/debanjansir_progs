#include<stdio.h>

int primecheck(int x)
{
	if (x<=1)
	{
		return 0;
	}
	else if (x==2 || x==3)
	{
		return 1;
	}
	else if (x%2==0 || x%3==0)
	{
		return 0;
	}
	for(int i=5;i*i<x;i+=6)
	{
		if (x%i==0 || x%(x+2)==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	printf("Enter the range to generate prime numbers=");
	int range=0;
	scanf("%d",&range);
	for(int j=1;j<=range;j++)
	{
		if(primecheck(j))
		{
			printf("%d\n",j);
		}
	}
}
