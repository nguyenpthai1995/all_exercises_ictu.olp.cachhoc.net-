#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
vector<string> Fibo;

int char2num(char a){
	int _a = a - '0';
	return _a;	
}

char num2char(int a){
	char _a = a + '0';
	return _a;
}

string plStr(string str1, string str2){
	int len_str1, len_str2, sub_len, len, l=0, d=0;
	string str = "", p = "";
	len_str1 = str1.length();
	len_str2 = str2.length();
	(len_str1 >= len_str2)?(sub_len = len_str1-len_str2):(sub_len = len_str2-len_str1);
	for(int i=0; i<sub_len; i++)
		str += "0";
	if(len_str1 > len_str2)
		str2 = str + str2;
	else
		str1 = str + str1;
	len = str1.length();
	for(int i=len-1; i>=0; i--){
		l = char2num(str1[i]) + char2num(str2[i]) + d;	
		d = l/10;
		p = num2char(l%10) + p;		
	}
	if(d > 0)
		p = num2char(d) + p;
	return p;
}

void PCS(int n){
	Fibo.push_back("1");
	Fibo.push_back("2");
	
	for(int i=2; i<=n; i++)
		Fibo.push_back(plStr(Fibo.at(i-1),Fibo.at(i-2)));
		
	cout << Fibo.at(n-1) << endl;
}

int main(){
	int T, n;
	cin >> T;
	for(int tc=1; tc<=T; tc++){
		cin >> n;
		PCS(n);
	}
	return 0;
}
