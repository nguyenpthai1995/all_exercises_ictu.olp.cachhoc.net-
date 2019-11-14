#include<iostream>

using namespace std;
int n, a[20], count=0;

bool checkPrime(int a){
	int count = 0;
	bool ans = true;
	if(a < 2)
		return false;
	for(int i = 2; i <= a/2; i++){
		if(a%i == 0){
			ans = false;
			break;
		}		
	}
	return ans;
}

bool checksum(int a, int b){
	if(a == 0 || b == 0)
		return false;
	else{
		if(checkPrime(a+b))
			return true;
		else
			return false;
	}
}

void inverted(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

bool checkAllMatric(){
	int c = 0;
	for(int i=0; i<n; i++)
		if(checksum(a[i%n],a[(i+1)%n]))
			c++;
	if(c == n)
		return true;
	else
		return false;	
}

int dq(int x){		
	if(x == n-1){
		if(checkAllMatric())
			count++;								
	}else{
		int c = x;
		for(int i=x+1; i<n; i++)
			if(checksum(a[c],a[i])){
				inverted(a[i],a[c+1]);
				dq(x+1);
				inverted(a[i],a[c+1]);	
			}	
	}			
	return count;	
}

int main(){
	int T;
	cin >> T;
	for(int t=1; t<=T; t++){
		count = 0;
		cin >> n;		
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << dq(0) << endl;
	}
	
	
	return 0;
}
