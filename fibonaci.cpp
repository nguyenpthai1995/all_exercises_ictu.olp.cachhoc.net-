#include<iostream>
#include<vector>

using namespace std;

void Fibonacci(int a){
	vector<int> Fibo;
	Fibo.push_back(1);
	Fibo.push_back(1);
	
	for(int i=2; i<a; i++)
		Fibo.push_back(Fibo.at(i-1) + Fibo.at(i-2));
		
	cout << Fibo.at(a-1);	
}

int main(){
	int a;
	
	cin >> a;
	
	Fibonacci(a);
	
	return 0;
}
