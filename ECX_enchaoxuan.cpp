#include<iostream>
#include<cstring>
#include<sstream>
#include<cmath>

using namespace std;
long long M[100] = {};

string num2string(long long a){
	string str = "";
	stringstream num2str;
	num2str << a;
	str = num2str.str();
	return str;
}

long long string2num(string a){
	long long _a = 0;
	for(int i = 0; i < a.length(); i++)
		_a += (a[i] - '0')*pow(10,a.length()-1-i);	
	return _a;
}

bool test_dif(string a, string b){
	int check = 0;
	int size_a = a.length();
	int size_b = b.length();
	for(int i = 0; i < size_a; i++){
		for(int j = 0; j < size_b; j++)
			if(a[i] == b[j]){
				check = 1;
				break;
			}
		if(check == 1)
			break;
	}
	if(check == 0)
		return true;
	else
		return false;
} 

long long res(long long a){
	string xa = num2string(a);
	string b = "";
	int len_a = xa.length();
	for(int i=0; i<len_a; i++){
		if(i==0){
			for(int j=(xa[0]-'0')+1; j<=a; j++){
				if(test_dif(num2string(j),xa)){
					b += num2string(j);
					break;
				}
			}
		}else{
			for(int j=0; j<10; j++){
				if(test_dif(num2string(j),xa)){
					b += num2string(j);
					break;
				}	
			}
		}
	}
	return string2num(b);
}

int main(){
	int T, num;	
	M[0] = 0;	
	for(int i=1; i<=100; i++){
		M[i] = res(M[i-1]);	
	}
	
	cin >> T;
	for(int tc=0; tc<T; tc++){
		cin >> num;
		cout << M[num] << endl;		
	}

	return 0;
}
