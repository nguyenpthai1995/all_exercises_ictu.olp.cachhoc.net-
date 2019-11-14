#include<iostream>
using namespace std;

int main(){
	int k, n, m, c, sum, t;
	cin >> k >> n >> m;   
	if(k < n)
		cout << -1 << endl;
	else{
		c = k%m; 
		sum = k/m; 
		if(c == 0)
			cout << sum << endl;
		else{
			if(c < n) 	
				sum--; 
			
			c = k - sum*m; 
			t = c;
			c %= n; 
			if(c == 0){
				sum += t/n; 
				cout << sum << endl;
			}else
				cout << -1 << endl;	
		}
	}
	
		
	return 0;
}
