#include<iostream>
#include<string>

using namespace std;

int main(){
	int T, len, x, count;
	string str;
	
	cin >> T;
	
	for(int t=1; t<=T; t++){
		cin >> str;
		len = str.length();
		x = 0, count = 0;
		for(int i=0; i<len; i++){
			if(str[i] == 'C')
				x++;
			else if(str[i] == 'N')
				x = 0;
			count += x;		
		}
		cout << count << endl;
	}

	return 0;
}
