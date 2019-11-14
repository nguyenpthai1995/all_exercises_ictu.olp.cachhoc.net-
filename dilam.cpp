#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;


int main(){
	int n, a[100000], k, min = 2000000000;
	
	cin >> n;	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(int i=1; i<n; i++){
		k = a[i] - a[i-1];
		if(k < min)
			min = k;
	}
	
	cout << min << endl;		
	return 0;
}
