#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double a, b, v;
	int n;
	
	cin >> a >> b >> v;
	
	if(a >= v)
		n = 1;
	else{
		n = ceil((v-a)/(a-b) + 1);	 // (a-b)*(songay-1)+ a >= v	
	}
	
	cout << n;

	return 0;
}
