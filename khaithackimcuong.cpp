#include<iostream>

using namespace std;

int sum(int a[][100], int x, int y, int k){
	int s = 0;
	for(int i=x; i<x+k; i++)
		for(int j=y; j<y+k; j++)
			s += a[i][j];
	return s;
}

int main(){
	int n, k, a[100][100], res, _max=0;
	cin >> n >> k;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> a[i][j];
			
	for(int i=0; i< n-k+1; i++)
		for(int j=0; j< n-k+1; j++){
			res = sum(a,i,j,k);
			if(res > _max)
				_max = res;	
		}
	cout << _max << endl;			
	return 0;
}
