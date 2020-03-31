#include<bits/stdc++.h>

using namespace std;
void permute(

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		permute(arr[i],arr);
	}
}

