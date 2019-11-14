#include<iostream>
#include<cstring>
#include<sstream>

using namespace std;

int dao(int a){
	//chuyen kieu so int a sang kieu string str
	stringstream num2str;
	num2str << a;
	string str = num2str.str();
	//dao vi tri cac phan tu trong chuoi str
	int len = str.length();
	for(int i=0; i< len/2; i++){
		char temp = str[i];
		str[i] = str[len-i-1];
		str[len-i-1] = temp;
	}	
	//chuyen chuoi str sau khi dao vi tri ve kieu so int theo int a ban dau
	stringstream str2num(str);
	str2num >> a;
	
	return a;
}

bool check(int a, int b){
	bool ans = true;
	int num1, num2;
	if(a >= b){		
		num1 = a;
		num2 = b;
	}else{
		num1 = b;
		num2 = a;
	}
	
	for(int i=2; i<=num2; i++)
		if(num1%i == 0 && num2%i == 0){
			ans = false;
			break;	
		}
		
	return ans;	
}

int main(){
	int T, a, b, count;
	cin >> T;
	
	for(int t=1; t<=T; t++){
		cin >> a >> b;
		count = 0;
		for(int i=a; i<=b; i++)		
			if(check(i,dao(i)))	
				count++;
		cout << count << endl;
	}

	return 0;
}
