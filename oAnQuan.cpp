#include<iostream>
using namespace std;
int main(){
	int n, k;
	int A[1000];
	
	cin >> n >> k;
	A[n];
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	int d = A[k-1];
	A[k-1] = 0;
	int i = k-1;
	
	if(d>n){
		int a =d/n;
		for(int i=0; i<n; i++)
			A[i] += a;
		d = d%n;
	}
	
	while (d>0){
		if(i < n-1){
			i++;	
		}else if(i == n-1){
			i = 0;
		}	
		A[i]++;
		d--;
	}
	
	for(int i=0; i<n; i++)
		cout << A[i] << " ";
		
	cout << endl;
	return 0;
}

