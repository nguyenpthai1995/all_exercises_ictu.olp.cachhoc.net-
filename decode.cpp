#include<iostream>
#include<cstring>
using namespace std;

int mahoa(char a){
	switch(a){
		case 'a': case 'b': case 'c':{
			return 2;
			break;
		}
		case 'd': case 'e': case 'f':{
			return 3;
			break;
		}
		case 'g': case 'h': case 'i':{
			return 4;
			break;
		}
		case 'j': case 'k': case 'l':{
			return 5;
			break;
		}
		case 'm': case 'n': case '0':{
			return 6;
			break;
		}
		case 'p': case 'q': case 'r': case 's':{
			return 7;
			break;
		}
		case 't': case 'u': case 'v':{
			return 8;
			break;
		}
		case 'w': case 'x': case 'y': case 'z':{
			return 9;
			break;
		}
		case ' ':{
			return 0;
			break;
		}
	}
}

int main(){
	int T;
	cin >> T;
	cin.ignore();
	for(int t=0; t<T; t++){
		string str;		
		getline(cin,str);
		int len = str.length();
		for(int i=0; i<len; i++){
			cout << mahoa(str[i]);
		}
		cout << endl;
	}

	return 0;
}

