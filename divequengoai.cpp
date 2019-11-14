#include<iostream>
using namespace std;
int main(){
	int n;
	int A[100];
	int B[100];
	
	cin >> n;
	A[n];
	B[n];
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	for(int i=0; i<n; i++){
		cin >> B[i];
	}
	int min = 1000;
	int vt = 0;
	int sum = 0;
	for(int i=0; i<n; i++){
		if(B[i] <= min){
			sum += B[i]*A[i];
			min = B[i];
			vt = i;
		}else if(B[i] > min){
			sum += A[i]*B[vt];
		}
	}
	cout << sum << endl;
	return 0;
}

