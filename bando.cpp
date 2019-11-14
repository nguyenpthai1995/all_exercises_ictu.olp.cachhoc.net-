#include<iostream>
#include<cstring>
#include<iomanip>

using namespace std;
int l[4][2] = {{0,1},{0,-1},{-1,0},{1,0}};
int a[100][100], m, n;

void numP(int x, int y){
	int _x, _y;
	a[x][y] = 2;
	for(int i=0; i<4; i++){
		_x = x + l[i][0];
		_y = y + l[i][1];
		if(a[_x][_y] != 2){
			a[_x][_y] = 2;
			numP(_x,_y);
		}
	}
}

void res(){
	int sum = 0, numarea = 0;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(a[i][j] == 1)
				sum++;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if(a[i][j] != 2){
				numP(i,j);
				numarea++;	
			}
	cout << fixed << setprecision(2) << (float)sum/numarea << endl;				
}

int main(){
	int T;
	char ch;
	cin >> T;
	for(int t=1; t <=T; t++){	
		cin >> m >> n;
		for(int i=0; i<m; i++)	
			for(int j=0; j<n; j++){
				cin >> ch;	
				if(ch == '#')
					a[i][j] = 2;
				else if(ch == '-')
					a[i][j] = 0;
				else 
					a[i][j] = 1;
			}
		res();
	}
	
	return 0;
}

