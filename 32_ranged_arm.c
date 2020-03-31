#include<stdio.h>
int armstrong(int n)
{
	int temp=n;
	int result=0;
	int w;
	while(temp!=0)
	{
		w=temp%10;
		result=10*result+w;
		temp=temp/10;
	}
	//~ printf("%d\n",result);
	if (result==n)
		return 1;
	else
		return 0;
}
	
int main()
{
	int i,j;
	printf("Enter the range of the numbers=");
	scanf("%d %d",&i,&j);
	for(int p=i;p<j;p++)
	{
		if(armstrong(p))
		printf("%d\n",p);
	}
	//~ int b;
	//~ scanf("%d",&b);
	//~ printf("%d",armstrong(b));
	return 0;
	
}
