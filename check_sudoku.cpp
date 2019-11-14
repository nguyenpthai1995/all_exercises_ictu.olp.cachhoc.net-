#include<iostream>
using namespace std;
int n, a[9][9];

bool check(int x, int y, int value){ 
	bool ans = true;	
	for(int i=0; i<9; i++){
		if(i == y)
			continue;
		if(a[x][i] == value)
			ans = false;
	}		
	for(int i=0; i<9; i++){
		if(i == x)
			continue;
		if(a[i][y] == value)
			ans = false;
	}
	int _x = x/3;
	int _y = y/3;
	for(int i=_x*3; i<_x*3 + 3; i++)
		for(int j=_y*3; j<_y*3 + 3; j++){
			if(i == x && j == y)
				continue;
			if(a[i][j] == value)
				ans = false;
		}
	return ans;		
}

void resCheck(){
	string ans = "true";
	for(int i=0; i<9; i++)
		for(int j=0; j<9; j++)
			if(a[i][j] != 0)
				if(check(i,j,a[i][j]) == false){
					ans = "false";
					break;
				}				
	cout << ans << endl;				
}

int main(){
	cin >> n;
	for(int tc=0; tc<n; tc++){
		for(int i=0; i<9; i++)
			for(int j=0; j<9; j++)
				cin >> a[i][j];
		resCheck();
	
	}
	return 0;
}
