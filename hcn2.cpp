#include<iostream>

using namespace std;

int main(){
	int a, b, acreage, perimeter;
	cin >> a >> b;
	
	perimeter = a*2 + b*2;
	acreage = a*b;
	
	cout << perimeter << " " << acreage << endl;
	
	return 0;
}
