#include<iostream>
#include<cmath>
using namespace std;


int main(){
	int T;
	cin >> T;
	for(int t=1; t<=T; t++){
		int n, k, num, ansm = 2000000000, ansf, a[100][100], _max=0, min = 2000000000, sum;
		cin >> n >> k;
			
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++){
				cin >> a[i][j];	
				if(a[i][j] > _max)
					_max = a[i][j];
				else if(a[i][j] < min)
					min = a[i][j];
			}
		for(int i=min; i<=_max; i++){
			sum = 0;
			for(int j=0; j<n; j++)
				for(int p=0; p<n; p++){
					if(a[j][p] == i)
						continue;
					else if(a[j][p] < i)
						sum += (i-a[j][p])*2*k;
					else 
						sum += (a[j][p]-i)*k; 	
				}
			if(sum < ansm){
				ansm = sum;
				ansf = i;	
			}					
		}		
		cout << ansf << " " << ansm << endl;	
	}	

	return 0;
}
