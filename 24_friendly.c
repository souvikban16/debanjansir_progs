#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter the numbers to test for friendly");
	scanf("%d %d",&a,&b);
	int p=0,q=0;
	
	for(int i=1;i<=a;i++)
	{
		if (a%i==0)
		{
			printf("%d\n",i);
			p=p+i;
		}
	}
	
	for(int i=1;i<=b;i++)
	{
		if (b%i==0)
		{
			printf("%d\n",i);
			q=q+i;
		}
	}
	
	if ((p/a)==(q/b))
	{
		printf("friendly");
	}
	else{
		printf("not friendly");
		
	}
}
