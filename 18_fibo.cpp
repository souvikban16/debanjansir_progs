#include <stdio.h>

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if (n==0){
		cout<<("No values to show");
	}
	else if (n==1)
	{
		cout<<("0");
	}
	else if  (n==2)
	{
		cout<<("0,1");
	}
	else
	{
		cout<<("0,1");
		int a=0,b=1;
		for(int i=1;i<=n-2;i++)
		{
			int temp=a+b;
			a=b;
			b=temp;
			cout<<(",")<<(temp);
		}
	}
	return 0;
}