#include<stdio.h>
int replace(int n)
{
	int result=0,k;
	int order=1;
	while(n!=0)
	{
		k=n%10;
		if(k==0)
		{			
			k=1;
		}
		//~ printf("%d\n",k);
		result=k*order+result;
		//~ printf("%d\n",result);
		n=n/10;
		order*=10;

	}
	return result;
}


int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",replace(n));
	return 0;
}

