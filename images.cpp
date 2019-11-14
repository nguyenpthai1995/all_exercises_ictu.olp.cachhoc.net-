#include<iostream>

using namespace std;
int n,k, A[800][800];

bool chil_Matric(int x, int y, int k){
	int check = 0;
	for(int i=x; i<x+k; i++){
		for(int j=y; j<y+k; j++)
			if(A[i][j] == 0){
				check = 1;
				break;
			}
		if(check == 1)
			break;
	}
	return (check == 0)?true:false;			
}

int main(){
	int count = 0;
	
	cin >> n >> k;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> A[i][j];
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)	
			if(chil_Matric(i,j,k))
				count++;
				
	cout << count << endl;
	return 0;
}
