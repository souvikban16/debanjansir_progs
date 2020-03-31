#include<bits/stdc++.h>
using namespace std;
int octal(int a);
int binary(int n)
{
	int mult=1,dec=0;
	while(n!=0)
	{
		dec=dec+mult*(n%10);
		mult*=2;
		n/=10;
	}
	return octal(dec);
	
}
int octal(int a)
{
	if(a==1)
	{
		return 1;
		
	}
	else
	{
		return (a%8)+10*octal(a/8);
	}
}		

int main()
{
	cout<<"Enter the number= in binary="<<endl;
	int a;
	cin>>a;
	cout<<"Decimal="<<binary(a)<<endl;
}

	
	
