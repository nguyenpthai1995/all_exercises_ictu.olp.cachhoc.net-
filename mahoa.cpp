#include<iostream>

using namespace std;
int a;

int init(int A[]){
	for(int i=0; i<20; i++)
		A[i] = 0;
}

void processed(){
	//int *B = new int(), *A = new int();
	int A[20], B[20];
	init(A);
	init(B);
	int c=0, temp, _a = a, k=0;
	if(a<10){
		if(a==0)
			cout << 10;
		else
			cout << a;
	}else{
		for(int i=2; i<10; i++)
		if(a%i == 0){
			A[k] = i;
			k++;
		}
		for(int i=k-1; i>=0; i--){
			while(_a%A[i] == 0){
				_a = _a/A[i];
				B[c] = A[i];
				c++;
			}
		}
		if(_a == 1){
			for(int i=0; i<c-1; i++)
				for(int j=i; j<c; j++)
					if(B[i] > B[j]){
						temp = B[i];
						B[i] = B[j];
						B[j] = temp;
					}
			for(int i=0; i<c; i++)
				cout << B[i];
		}else
			cout << -1;	
	}
}

int main(){
	cin >> a;
	processed();
	return 0;
}
