#include<iostream>
#include<cstring>
#include<sstream>

using namespace std;

string num2string(int a){
	string str = "";
	stringstream num2str;
	num2str << a;
	str = num2str.str();
	return str;
}

bool test_dif(string &a, string &b){
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

int main(){
	int T, num, a[100] = {};
	string str_a, str_b;
	//cin >> T;
	
	a[0] = 0;
	for(int i=1; i<=50; i++){
		long long t = a[i-1]; // so truoc
		str_a = num2string(t); // so truoc khi chuyen sang string
		while(1){
			t++;	//tang gia tri cho cac so sau
			str_b = num2string(t);
			if(test_dif(str_a,str_b))
				break;
		}
		a[i] = t;
	}
		
	/*for(int tc=0; tc<T; tc++){
		cin >> num;
		cout << a[num] << endl;
	}*/
	for(int i=0; i<=50; i++)
		cout << a[i] << endl;
	
	return 0;
}
