#include<iostream>
#include<cstring>
#include<sstream>
#include<cmath>
#include<queue>
#include<algorithm>
#include<stack>
#define pi 3.141592653589793238462643383279502884197169399377510
using namespace std;

int main(){
	queue <int> a;
	int n;
	a.push(1);
	a.push(2);
	if(a.empty())
		n = 0;
	else 
		n = a.front();
	cout << n;
	
	return 0;
}
