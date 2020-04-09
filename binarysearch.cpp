
#include "bits/stdc++.h"
using namespace std;



void solve() {
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int f;
	cin >> f;
	//cout<<f<<endl;
	int l = 0, u = n-1;
	int mid = 0;
	int flag = 0;
	while (l<u) {
		cout<<l<<" "<<u<<endl;

		mid = (l + u) / 2;
		if (f < arr[mid]) {
			u = mid-1;
		}
		else if (f > arr[mid]) {
			l = mid+1;
		}
		else if (f == arr[mid]) {
			cout << mid+1 << endl;
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		cout << "Not found";
	}

}

int main()
{
	int t;
	t = 1;
	while (t--) {
		solve();
	}
	return 0;

}
