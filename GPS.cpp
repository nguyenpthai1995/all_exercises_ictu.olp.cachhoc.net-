#include<iostream>

using namespace std;


int main(){
	int ab, bc, ca, t;
	
	cin >> ab >> bc >> ca >> t;
	
	int sum = ab + bc + ca;
	int pos = t % sum;
	
	if(pos == 0)
		cout << "A";
	else if( pos> 0 && pos < ab)
		cout << "AB";
	else if(pos == ab)
		cout << "B";
	else if(pos > ab && pos < (ab+bc))
		cout << "BC";
	else if(pos == (ab+bc))
		cout << "C";
	else if(pos > (ab+bc) && pos < (ab+bc+ca)) 
		cout << "CA";
		
	return 0;
}
