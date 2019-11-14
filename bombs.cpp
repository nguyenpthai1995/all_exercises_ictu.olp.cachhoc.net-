#include<iostream>
using namespace std;
int a[100][100], cnt_0 = 1;
int l[8][2] = {{0,1},{0,-1},{-1,0},{1,0},{-1,1},{1,1},{-1,-1},{1,-1}};

int count0(int x, int y){
	int _x,_y;
	a[x][y] = 10;
	for(int i=0; i<8; i++){
		_x = x + l[i][0];
		_y = y + l[i][1];
		if(a[_x][_y] == 0){
			a[_x][_y] = 10;
			cnt_0++;
			count0(_x,_y);
		}
	}	
	return cnt_0;	
}

int main(){
	int n, k, x, y;
	
	cin >> n >> k;
	for(int i=0; i<n+2; i++){
		a[0][i] = 10;
		a[i][0] = 10;
		a[n+1][i] = 10;
		a[i][n+1] = 10;
	}
	for(int i=1; i<n+1; i++)
		for(int j=1; j<n+1; j++)
			cin >> a[i][j];
	
	for(int i=0; i<k; i++){
		cnt_0 = 1;
		cin >> x >> y;	

		if(a[x][y] == 0){
			cout << count0(x,y) << endl;
		}else
			cout << 0 << endl;
	}

	return 0;
}
