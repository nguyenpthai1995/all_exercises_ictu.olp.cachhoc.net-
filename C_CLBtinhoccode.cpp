#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int n;
	string A[100];
	int B[100];
	
	cin >> n;
	A[n];
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	for(int i=0; i<n; i++){
		B[i] = 0;
	}
	int count, t;
	string trung;
	cout << "OK" << endl;
	for(int i=1; i<n; i++){
		count = 0;
		for(int j = 0; j < i; j++){
			if(A[i]==(A[j])){
				count++;
				B[j]++;
				t = j;
				break;	
			}
		}
		if(count > 0){
			ostringstream conv;
			conv << B[t];
			trung = conv.str();
			cout << A[i] + trung << endl;
		}else{
			cout << "OK" << endl;
		}
	}
	return 0;
}

