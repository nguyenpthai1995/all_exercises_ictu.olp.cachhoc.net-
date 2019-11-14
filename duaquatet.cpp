#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	string str;
	int rotate, len, x=0, y=0;
	double k;
	
	cin >> str;
	len = str.length();
	
	for(int i=0; i< len; i++){
		if(str[i] == 'N') // gan cung
			rotate = 0;
		else if(str[i] == 'S')
			rotate = -2;
		else if(str[i] == 'W')
			rotate = -3;
		else if(str[i] == 'E')
			rotate = -1;
		else if(str[i] == 'L') //re trai +1, re phai -1
			rotate++;
		else if(str[i] == 'R')
			rotate--;
		else if(str[i] == 'B')
			rotate -= 2;
			
		if(rotate%4 == 0)    //di len
			y++;
		else if(rotate%4 == -1 || rotate%4 == 3) // sang phai
			x++;
		else if(rotate%4 == -2 || rotate%4 == 2) //di xuong
			y--;
		else if(rotate%4 == -3 || rotate%4 == 1) //sang trai
			x--;		
	}
	k = sqrt(x*x + y*y); 
	cout << fixed << setprecision(3) << k << endl;
	
	return 0;
}
