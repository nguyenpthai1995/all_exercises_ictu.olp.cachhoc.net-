#include<iostream>
using namespace std;
int A[1000], B[1000], L[1001][1001], n, m;

void qhd(){
	for(int i=0; i<n+1; i++)
		for(int j=0; j<m+1; j++){
			if(i==0 || j==0){
				L[i][j] = 0;
				continue;
			}
			if(A[i-1] == B[j-1])
				L[i][j] =  L[i-1][j-1] + 1;
			else
				(L[i][j-1] >= L[i-1][j])?(L[i][j]=L[i][j-1]):(L[i][j]=L[i-1][j]);
		}
		
	/*for(int i=0; i<n+1; i++){
		for(int j=0; j<m+1; j++)
			cout << L[i][j] << " ";		
		cout << endl;		
	}*/
	
	cout << L[n][m];				
}


int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++)
		cin >> A[i];
	for(int j=0; j<m; j++)
		cin >> B[j];
	qhd();
	return 0;
}
