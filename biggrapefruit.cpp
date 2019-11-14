#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int n, m, a[100000], num, sum;
	
	cin >> n;
	
	for(int i=0; i<n; i++)
		cin >> a[i];
		
	cin >> m;
	
	for(int i=0; i<m; i++){
		cin >> num;
		sum = 0;
		for(int j=0; j<n; j++){
			sum += a[j];
			if(num <= sum){
				cout << j+1 << " ";
				break;
			}
		}
	}		

	return 0;
}

