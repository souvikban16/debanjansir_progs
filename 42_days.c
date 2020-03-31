#include<stdio.h>

int daycheck(char *m)
{
	
	if(m[0]=='j' && m[1]=='a' && m[2]=='n')
	{
		return 1;
	}

	if(m[0]=='f' && m[1]=='e' && m[2]=='b')
	{
		return 3;
	}
	if(m[0]=='m' && m[1]=='a' && m[2]=='r')
	{
		return 1;
	}
	if(m[0]=='a' && m[1]=='p' && m[2]=='r')
	{
		return 2;
	}
	if(m[0]=='m' && m[1]=='a' && m[2]=='y')
	{
		return 1;
	}
	if(m[0]=='j' && m[1]=='u' && m[2]=='n')
	{
		return 2;
	}
	if(m[0]=='j' && m[1]=='u' && m[2]=='l')
	{
		return 1;
	}
	if(m[0]=='a' && m[1]=='u' && m[2]=='g')
	{
		return 1;
	}
	if(m[0]=='s' && m[1]=='e' && m[2]=='p')
	{
		return 2;
	}
	if(m[0]=='o' && m[1]=='c' && m[2]=='t')
	{
		return 1;
	}
	if(m[0]=='n' && m[1]=='o' && m[2]=='v')
	{
		return 2;
	}
	if(m[0]=='d' && m[1]=='e' && m[2]=='c')
	{
		return 1;
	}
	else
	{
		return 4;
	}
}
	
int main()
{
	printf("Enter the month in lowercase three letters and year=");
	char m[4];
	scanf("%s",m);
	int year;
	scanf("%d",&year);
	int monthflag=daycheck(m);
	//~ printf("%d",monthflag);
	if(monthflag==1)
	{
		printf("31");
	}
	else if(monthflag==2)
	{
		printf("30");
	}
	else if(monthflag==3)
	{
		if(year%4==0)
		{
			printf("29");
		}
		else
			printf("28");
	}
	else{
		printf("Error in input");
	}
	return 0;
}
