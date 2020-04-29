#include<bits/stdc++.h>
using namespace std;


long long  mergesort(int *arr,int l,int r);
long long merge(int *arr,int l,int mid,int r);

long long merge(int *arr,int l,int mid,int r){
	int i=l;int j=mid+1;
	long long  inversions=0;
	int res[r - l +1];
	int counter=0;

	while(i<=mid && j <= r){
		if( arr[i] < arr[j]){
			res[counter++]=arr[i++];
		}
		else{
			//cout<<"inversion detected=" << arr[i] <<" " <<arr[j]<<" "<< mid << " " << i << endl;
			inversions+=mid-i+1;
			res[counter++]=arr[j++];
		}
	}

	while(i <=mid){
		res[counter++]=arr[i++];
	}
	while(j <= r){
		res[counter++]=arr[j++];
	}
	counter=0;
	for(int k=l; k <= r; k++){
		arr[k] = res[counter++];
	}
	return inversions;
}



long long mergesort(int *arr,int l,int r){
	long long inversions=0;
	int mid;
	if(l<r){
		mid=(l+r)/2;
		inversions+=mergesort(arr,l,mid);
		inversions+=mergesort(arr,mid+1,r);

		inversions+=merge(arr,l,mid,r);

	}
	return inversions;
}

int main(){
	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	long long inversions=0;
	inversions=mergesort(arr,0,n-1);
	cout<< "Inversions=" <<inversions<<endl;

	
}

