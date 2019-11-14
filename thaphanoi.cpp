#include<iostream>
#include<cmath>

using namespace std;
int count = 0, k;

void HanoiTower(int n, int nguon, int dich, int trunggian){
	if(count == k){
		cout << nguon << " " << dich << " " << trunggian << endl;
	}else{
		count++;
		HanoiTower(n-1,nguon--, trunggian, dich--);
		HanoiTower(1,nguon, dich--, trunggian++);
		HanoiTower(n-1,dich--, nguon, trunggian++);
	}
}


int main(){
	int n;
	cin >> n >> k;	
	HanoiTower(n,0,0,0);
	return 0;
}
