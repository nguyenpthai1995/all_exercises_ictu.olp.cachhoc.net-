#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, a[100000];
	unsigned long long _min = 1000000000000000000, sum, sumAll = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >>a[i];
		sumAll += a[i];
	}
	sort(a,a+n);
	
	for(int i=1; i<n; i++){
		sum = a[i-1];
		while(a[i] == a[i-1]){
			sum += a[i];
			i++;
		}
		if(sum < _min)
			_min = sum;
	}
	cout << sumAll - _min;	
	
	return 0;
}
