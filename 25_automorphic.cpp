#include<bits/stdc++.h>
using namespace std;
//~ this has been done to improve the scope of the Program
int main()
{
	int n;
	cout<<"Enter the number to check for automorphism"<<endl;
	cin>>n;
	int zex=1;
	int temp=n;
	while(temp!=0)
	{
		zex=10*zex;
		temp=temp/10;
	}
	//~ printf("%d",zex);
	int temp2=n*n;
	temp2=temp2%zex;
	if (temp2==n)
	{
		cout<<"Automorph"<<endl;
	}
	else{
		cout<<"Not Automorph"<<endl;
	}
}
