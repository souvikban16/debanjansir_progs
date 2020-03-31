#include<stdio.h>

int octal(int x)
{
	int dec=0,mult=1;
	while(x!=0)
	{
		//~ if(x==1)
		//~ {
			//~ dec=dec+1*mult;
		//~ }
		//~ else{
			dec=dec+(x%10)*mult;
		//~ }
		x=x/10;
		mult=mult*2;
	}
	int octal=0;
	mult=1;
	while(dec!=0)
	{
		octal=octal+mult*(dec%8);
		printf("%d\n",dec%8);
		dec=dec/8;
		mult=mult*10;
	}
	return octal;
}


int main()
{
	printf("Enter the numbr in binary=");
	int n;
	scanf("%d",&n);
	printf("Equivalent in octal=%d",octal(n));
	return 0;
}
