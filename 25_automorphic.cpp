#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number to check for automorphism"<<endl;
	cin>>n;
	int temp=n*n;
	temp=temp%100;
	if (temp==n)
	{
		cout<<"Automorph"<<endl;
	}
	else{
		cout<<"Not Automorph"<<endl;
	}
}
