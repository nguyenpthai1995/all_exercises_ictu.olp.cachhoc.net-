#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++) //tao khoang trang ben trai tam giac va giam dan khi i tang (j<=n-i)
			cout << " ";
		for(int j=1;j<=2*i-1;j++) //ve so luong sao cua moi tang theo cong thuc 2*i-1
			cout << "*";
		cout << endl;
	}
	
	return 0;
}
