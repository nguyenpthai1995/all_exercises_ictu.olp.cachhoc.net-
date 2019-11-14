#include<iostream>

using namespace std;

int main(){
	int T, num;
	
	cin >> T;
	
	for(int t=1; t<=T; t++){
		cin >> num;
		cout << num*2+1 << endl;
	}

	return 0;
}
