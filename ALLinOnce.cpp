#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	float AB, BC, CA, AF, BD, CE;
	cin >> t;
	for(int tc=0; tc<t; tc++){
		cin >> AB >> BC >> CA >> AF >> BD >> CE;
		//kiem tra trung tuyen
		if(AF == AB/2 && BD == BC/2 && CE == CA/2)
			cout << "YES" << endl;
		else if(CE/(CA-CE) == BC/AB && BD/(BC-BD) == AB/CA && AF/(AB-AF) == CA/BC)
			cout << "YES" << endl;
		else if(sqrt(AB*AB-BD*BD) == sqrt(CA*CA-(BC-BD)*(BC-BD)) && sqrt(AB*AB-(CA-CE)*(CA-CE)) == sqrt(BC*BC-CE*CE) && sqrt(CA*CA-AF*AF) == sqrt(BC*BC-(AB-AF)*(AB-AF)))
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}

	return 0;
}
