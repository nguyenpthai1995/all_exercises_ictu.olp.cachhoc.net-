#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	double a, b, c, delta, x1, x2;
	
	cin >> a >> b >> c;
	
	if(a==0){
		if(b == 0 & c == 0)
			cout << "VSN" << endl;
		else if(b == 0)
			cout << "VN" << endl;
		else
			cout << "x = " << fixed << setprecision(2) << (-c/b) << endl;
	
	}else{
		delta = b*b - 4*a*c;
		if(delta < 0)
			cout << "VN" << endl;
		else if(delta == 0){
			x1 = -b/(2*a);
			cout << "x = " << fixed << setprecision(2) << x1 << endl;	
		}else{
			x1 = (-b+sqrt(delta))/(2*a);
			x2 = (-b-sqrt(delta))/(2*a);
			cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
		}
	}
	
	return 0;
}
