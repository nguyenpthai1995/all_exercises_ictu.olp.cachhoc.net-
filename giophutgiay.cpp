#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int s;
	
	cin >> s;
	
	int hh = s/3600;
	int mm = (s - hh*3600)/60;
	int ss = s - hh*3600 - mm*60;
	
	if(hh < 10)
		cout << "0" << hh << ":";
	else
		cout << hh << ":";
	if(mm < 10)
		cout << "0" << mm << ":";
	else
		cout << mm << ":";
	if(ss < 10)	
		cout << "0" << ss;
	else
		cout << ss;
	
	return 0;
}
