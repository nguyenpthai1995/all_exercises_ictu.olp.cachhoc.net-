#include<iostream>
#include<cstring>

using namespace std;

int main(){
	string s; 
	int A[123] = {};
	int len, char2num, count=0, dif;    // a-z = 97-122
	
	cin >> s;	
	len = s.length();
	
	for(int i=0; i<len; i++){
		char2num = s[i];
		A[char2num]++;	
	}

	for(int i=97; i<123; i++){
		if(A[i] != 0){
			count++;
		}
	}
	cout << count << endl;
	
	for(int i=0; i<len; i++){
		dif = 0;
		for(int j=i-1; j>=0; j--)
			if(s[i] == s[j])
				dif++;
		if(dif == 0){
			cout << s[i] << " " << A[s[i]] << endl;
		}
	}
	
	return 0;
}
