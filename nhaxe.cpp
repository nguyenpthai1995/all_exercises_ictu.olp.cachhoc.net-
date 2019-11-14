#include<iostream>

using namespace std;

int aft_num(int num){
	return (num%10000);
}

int main(){
	int k, index, money = 0;
	int A[10000] = {};
	
	cin >> k;
	
	for(int i=0; i<k; i++){
		cin >> index;
		A[aft_num(index)]++;
	}
	
	for(int i=2011; i<=9999; i++)
		if(A[i] > 0){
			if(A[i] <= 5)
				money += 100;
			else
				money += (100 + (A[i]-5));
		}
	
	cout << money << endl;
		
	return 0;
}
