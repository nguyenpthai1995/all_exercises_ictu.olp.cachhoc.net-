#include<iostream>
#include<stack>
using namespace std;
int n;
stack<char> s;
stack<char> st;
char ch[20];

void init(){
	while(!s.empty())
		s.pop();
	while(!st.empty())
		st.pop();
}

bool checkDN(){
	bool ans = true;
	for(int i=0; i<n*2; i++)
			s.push(ch[i]);
	for(int i=0; i<n*2; i++){
		if(s.top() == '('){
			if(st.empty()){
				ans = false;
				break;
			}else if(st.top() == ')'){
				s.pop();
				st.pop();
			}
		}else{
			st.push(s.top());
			s.pop();
		}
	}
	if(!s.empty() || !st.empty())
		ans = false;
	init();
	return ans;					
}

void dq(int x, int c_op, int c_cl){
	if(x == n*2){
		if(checkDN()){
			for(int i=0; i<n*2; i++)
				cout << ch[i];
			cout << endl;
		}
	}else if(c_op >= c_cl){
		char c[2];
		c[0] = '(';
		c[1] = ')';
		for(int i=0; i<2; i++){
			ch[x] = c[i];
			if(ch[i] == '('){				
				dq(x+1,c_op+1,c_cl);
			}
			if(ch[i] == ')'){
				dq(x+1,c_op,c_cl+1);
			}
		}
	}
}

int main(){
	cin >> n;
	ch[0] = '(';
	dq(1,1,0);
	return 0;
}
