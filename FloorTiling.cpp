#include<iostream>
#include<vector>

using namespace std;
int count, n;
int A[100];

bool checkArr0(int x){
	bool ans = true;
	for(int i=0; i<x; i++)
		if(A[i]==0)
			ans = false;
	return ans;
}

bool checkSum(int x, int y, int z){
	bool ans = false;
	int sum = 0;
	A[z] = y; 
	for(int i=0; i<x; i++)
		sum += A[i];
	if(sum < n)
		ans = true;
	return ans;
}

int countX(int y, int sum){
	if(y == n-1){
		if(checkArr0(sum))
			count++;
	}
	else{
		for(int i=1; i<=2; i++){
			if(checkSum(sum,i,y))
				A[i] = 1;
				countX(y+1,sum);
				A[i] = 0;
		}			
	}
	return count;
}

void result(){
	if(n%2 == 0) 
		count = 2;
	else 
		count = 1;
		
	for(int i=1; i<n; i++)
		for(int j=i; j<n; j++)
			if(1*i+2*j == n){
				A[i+j];
				for(int t=0; t<i+j; t++)
					A[t] = 0;
				count += countX(0,i+j);
			}
	cout << count << endl;						
}

int main(){
	int T;
	cin >> T;
	for(int i=1; i<=T; i++){
		cin >> n;
		result();
	}
	return 0;
}
