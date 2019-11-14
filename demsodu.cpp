#include<iostream>
using namespace std;


int main(){
	unsigned long long num;
	int mod, n, x, ans=0, temp;	
	int _max = 0, _min = 1000000000;
	int a[100000] = {};
	
	cin >> n >> x;
	
	for(int i=0; i<n; i++){
		cin >> num; 
		mod = num%x;
		a[mod]++;
		if(mod > _max)
			_max = mod;
		else if(mod < _min)
			_min = mod;
	}
	
	for(int i=_min; i<=_max; i++)
		if(a[i] > 0)
			ans++;
			
	cout << ans;
	
	return 0;
}

