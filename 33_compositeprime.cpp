#include<bits/stdc++.h>
using namespace std;
int prime(int x)
{
	if(x==2 || x==3)
	return 1;
	if(x%2==0 || x%3==0)
	return 0;
	for(int i=5;i*i<x;i+=6)
	{
		if(x%i==0 || x%(x+2)==0)
		{
			return 0;
		}
	}
	return 1;
}


int composite(int n)
{
	for(int i=2;i<=n/2;i++)
	{
		//~ cout<<i<<endl;
		//~ cout<<n-i<<endl;
		if(prime(i))		
			if(prime(n-i))
				return 1;
	}
	return 0;
}

int main()
{
	int n;
	cin>>n;
	if(composite(n))
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	return 0;
}


				
	
