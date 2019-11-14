/*
Hinh chu nhat co chieu dai, rong la: A, B. Va chieu cao la h
The tich V = (A-2h)*(B-2h)*h  (1)
           = 4h^3 -2(A+B)h^2 + A*B*h
V max <=> (4h^3 -2(A+B)h^2 + A*B*h)' = 0
	  <=> 12h^2 -4(A+B)h + A*B = 0
Giai ra duoc h
Thay h vao lai (1) tinh V
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
	int T, A, B, delta;
	double h, x1, x2, V;
	cin >> T;
	for(int tc=0; tc<T; tc++){
		cin >> A >> B;
		delta = pow(4*(A+B),2) - 4*12*A*B;
		if(delta == 0){
			h = ((double)A+B)/6;
		}else{
			x1 = (4*((double)A+B) - sqrt(delta))/24;
			x2 = (4*((double)A+B) + sqrt(delta))/24;
			(x1 > x2)?(h = x2):(h = x1);	
		}
		V = (A-2*h)*(B-2*h)*h;
		cout << fixed << setprecision(11) << V << endl;
	}
	return 0;
}
