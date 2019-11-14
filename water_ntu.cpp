#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
vector<int> water;

int main(){
	int num,num1,num2,r=0;
	long long sum=0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> num1 >> num2;
		water.push_back(num2);
		sum += num1;
	}
	sort(water.begin(),water.end());
	while(true){
		num = water.at(r);
		if(sum >= num){
		    sum -= num;
			r++;
		}else{
		    break;
		}
	}			
	cout << n-r << endl;
	
	return 0;		
}

