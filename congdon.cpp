/*
#Ta có: 1 + 2 + 3 + ... + n = (n*(n+1))/2;
suy luan:
1^2 = 1*2 -1
2^2 = 2*3 - 2
3^2 = 3*4 - 3
...
n^2 = n*(n+1) - n

=> 1^2 + 2^2 + 3^2 + ... + n^2 = 1*2 + 2*3 + 3*4 + ... n*(n+1) - (1 + 2 + 3 + ... + n)
<=> (n*(n+1)*(n+2))/3 - (n*(n+1))/n
<=> (n*(n+1)*(2n+1))/6

trong 3 so lien tuc se co hoac 1 so chia het cho 6 hoac co 2 so 1 so chia het cho 2 va 1 so chia het cho 6
ta thuc hien chia de mat di mau so 6
sau do chia lay du lan luot, vd:
8*15*122 chia 111 duoc 131 du 99
8 chia 111 du 8
15 chia 111 du 15
122 chia 111 du 11
8*15 chia 111 du 9
9*11 chia 111 du 99 (tuong duong chia thang)
*/

#include<iostream>
#include<cmath>
using namespace std;
int M[3];

int resuf(){
	int num;
	for(int i=0; i<3; i++)
		if(M[i]%2 == 0){
			M[i] /= 2;
			break;
		}
	for(int i=0; i<3; i++)
		if(M[i]%3 == 0){
			M[i] /= 3;
			break;
		}
	for(int i=0; i<3; i++)
		M[i] %= 1000000007;
			
	num = ((long long)M[0]*M[1])%1000000007;
	num = ((long long)num*M[2])%1000000007;
	return num;
}

int main(){
	double a,b;
	int _a, _b, sum12b, sum12a, suma2b;
	
	cin >> a >> b;

	_b = b;  // tu dong lam tron xuong	
	//sum12b = (_b*(_b+1)*(2*_b+1))/6; //tong binh phuong tu 1 den b	
	M[0] = _b;
	M[1] = _b + 1;
	M[2] = _b*2 + 1;
	sum12b = resuf();
	//cout << sum12b << endl;
	//sum12a = (_a*(_a+1)*(2*_a+1))/6; //tong binh phuong tu 1 den a
	_a = ceil(a) - 1; //tru di khuc dau
			
	M[0] = _a;
	M[1] = _a + 1;
	M[2] = _a*2 + 1;
	sum12a = resuf();
	//cout << sum12a << endl;
	suma2b = sum12b - sum12a;
	
	if(suma2b >= 0)	
		cout << suma2b << endl;
	else
		cout << (suma2b + 1000000007) << endl; //giam di 1 lan tru cho so bi chia 10^9 + 7
		
	return 0;
}


