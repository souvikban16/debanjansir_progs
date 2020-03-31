#include<stdio.h>


void sieve(int r)
{
	int prime[r];
	for(int i=0;i<r;i++)
	{
		prime[i]=1;
	}
	
	for(int p=2;p*p<r;p++)
	{
		if(prime[p]==1)
		{
			for(int i=p*p;i<r;i+=p)
			{
				prime[i]=0;
			}
		}
	}
	for(int i=2;i<r;i++)
	{
		if(prime[i]==1)
		{
			printf("%d\n",i);
		}
	}
}


int main()
{
	printf("Enter the range=");
	int range=0;
	scanf("%d",&range);
	sieve(range);
}
