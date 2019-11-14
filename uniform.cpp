#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double m, n, t;
	cin >> m >> n >> t;
	
	long long money = ceil(n - n/(m+1)) * t; // so ao duoc tang = n/(m+1) -> so ao can dat may + n/(m+1) >= n
	
	cout << money;

	return 0;
}
