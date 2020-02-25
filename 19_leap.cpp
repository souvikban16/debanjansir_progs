#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
	cout<<("Enter the year to be checked for a leap year");
	int y=2000;
	cin>>y;

	if (y%4==0)
		cout<<(y)<<(" is a leap year");
	else
		cout<<(y)<<("is not a leap year");
	return 0;
}