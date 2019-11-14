#include<iostream>

using namespace std;

int main(){
	int n, m, C[50], temp, a[252][52];
	
	cin >> n >> m;
	for(int i=0; i<m; i++)
		cin >> C[i];
	for(int i=0; i<m-1; i++)
		for(int j=i+1; j<m; j++)
			if(C[i] < C[j]){
				temp = C[i];
				C[i] = C[j];
				C[j] = temp;
			}
	
	return 0;
}
