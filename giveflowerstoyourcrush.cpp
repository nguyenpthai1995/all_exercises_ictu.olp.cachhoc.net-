#include<iostream>
using namespace std;
int A[102], n;

int sumPara(int x, int y){
	int sum = 0;
	for(int i = x; i <= y; i++)
		sum += A[i];
	return sum;	
}

int main(){
	int m, front, back, ans = 0;
	freopen("giveflowerstoyourcrush.txt","r",stdin);
	cin >> n >> m;
	A[n];
	for(int i = 1; i <= n; i++)
		cin >> A[i];
	for(int i = 0; i < m; i++){
		cin >> front >> back;
		if(sumPara(front,back) > 0)
				ans += sumPara(front,back);		
	}
	cout << ans << endl;
	return 0;
}
