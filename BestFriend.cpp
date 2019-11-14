#include<iostream>
using namespace std;

int sum(int a){
	int _sum = 0;
	for(int i=1; i<=a/2; i++)
		if(a%i == 0)
			_sum+=i;
	return _sum;
}

int main(){
	int a,b;
	cin >> a >> b;
	if(sum(a) == b && sum(b) == a)
		cout << "YES";
	else
		cout << "NO";
}
