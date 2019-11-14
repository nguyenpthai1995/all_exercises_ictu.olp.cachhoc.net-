#include<iostream>
using namespace std;

bool check(int a){
	int count = 0;
	bool ans = false;
	for(int i=2; i<=a; i++)
		if(a%i == 0)
			count++;
	if(count == 1)
		ans = true;
	return ans;
}

int main(){
	int n;
	cin >> n;
	
	for(int i=2; i<=n; i++)
		while(check(i) && (n%i==0)){
			cout << i << " ";
			n = n/i;
	}
		
	return 0;
}
