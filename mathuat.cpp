#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int T, len, r, k, n, locb, loca, _min, check;
	string str;	
	char ch[5] = {'a','e','i','o','u'};
	
	cin >> T;
	for(int t=1; t <=T; t++){	
		cin >> str;
		len = str.length();
		//bacedifoguhajekilomu
		check = 0, _min = 1000000000;		
		for(int i=0; i<len; i++){
			r = 0;
			if(str[i] == ch[r]){
				n = i;
				while(n < len){
					if(str[n] == ch[r])
						r++;
					if(r==5){
						check = 1;
						k = n-i+1;
						break;
					}
					n++;
				}
				if(k < _min){
					_min = k;
					locb = i+1;
					loca = n+1;
				}
			}
		}
		if(check == 1)
			cout << locb << " " << loca << endl;
		else
			cout << "-1 -1" << endl;
	}
	
	return 0;
}

