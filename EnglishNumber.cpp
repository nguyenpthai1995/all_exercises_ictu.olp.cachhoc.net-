#include<iostream>
#include<string>
using namespace std;
int A[11];

void resetA(){
	for(int i=0; i<11; i++)
		A[i] = 0;
}

void countNum(char a, char b){
	if(a == 'Z')
		A[0]++;
	else if(a == 'O')
		A[1]++;	
	else if(a == 'E')
		A[8]++;
	else if(a == 'N')
		A[9]++;
	else if(a == 'T'){
		if(b == 'W')
			A[2]++;
		else if(b == 'H')
			A[3]++;
		else
			A[10]++;
	}else if(a == 'F'){
		if(b == 'O')
			A[4]++;
		else
			A[5]++;
	}else{
		if(b == 'I')
			A[6]++;
		else
			A[7]++;
	}
}

void printNum(int x){
	string numb[11] = {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN"};
	cout << numb[x] << " ";
}

void Res(int x, int y){
	for(int i=0; i<y; i++){
		printNum(x);	
	}
}

int main(){
	int T, n;
	string numb;
	//freopen("EnglishNumber.txt","r",stdin);
	cin >> T;
	for(int t=1; t<=T; t++){
		resetA();
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> numb;
			countNum(numb[0],numb[1]);
		}
		for(int i=0; i<11; i++)
			if(A[i]>0)
				Res(i,A[i]);
		cout << endl;
	}
	return 0;
}
