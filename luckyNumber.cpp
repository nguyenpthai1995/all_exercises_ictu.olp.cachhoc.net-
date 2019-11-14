#include<iostream>
#include<cstring>
using namespace std;

int main(){	
	string n, m = "";
	int len, d = 0;
	
	cin >> n;
	len = n.length();
	
	if(n[0]-'0' < 6)
		for(int i=0; i<len-1; i++)
			m += "8";
	else if(n[0]-'0' == 9){
		for(int i=0; i<len; i++)
			m += "8";	
	}else if(n[0]-'0' == 7 || (n[0]-'0' == 8 && n[1]-'0' < 6 && len > 1)){
		m = "6";
		for(int i=0; i<len-1; i++)
			m += "8";
	}else{
		n = "0" + n;
		for(int i=len; i>=0; i--){
			if((n[i]-'0') - d < 6){
				if((n[i-1]-'0') - d == 0){	
					if(i-1 != 0){
						m = "8" + m;
						d = 0;
					}
				}else if((n[i-1]-'0') - d > 0){
					d = 1;
					m = "8" + m;
				}	
			}else if((n[i]-'0') - d == 6 || (n[i]-'0') - d == 7){
				if(n[i-1]-'0' == 0){
					if(i-1 == 0)
						m = "6" + m;
					else
						m = "8" + m;
					d = 0;
				}else if(n[i-1]-'0' == 8 || n[i-1]-'0' == 6){
					m = "6" + m;
					d = 0;
				}else{
					d = 1;
					m = "8" + m;
				}
			}else{
				m = "8" + m;
				d = 0;
			}
		}
	}
	cout << m;

	return 0;
}
