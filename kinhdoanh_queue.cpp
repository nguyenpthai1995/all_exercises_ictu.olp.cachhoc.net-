#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int n;
queue<int> q;
queue<int> qtemp; 

class _time{
public:
	int t_come;
	int t_eat;
public:
	int sum() const{
		return t_come + t_eat;
	}
};
_time a[1000 00];

//void printQ(queue<int> q){
//	int a;
//	int size = q.size();
//	for(int i=0; i<size; i++){
//		a = q.front();
//		cout << "f: " << a << endl;
//		q.pop();
//		q.push(a);
//	}
//	cout << endl;
//}

void processed(){
	q.push(a[0].sum());
	for(int i=1; i<n; i++){
		if(q.front() <= a[i].t_come){
			q.pop();
		}
		
		q.push(a[i].sum());
//		printQ(q);
	}	
	cout <<q.size();
}

//bool compare_sum(const _time &x, const _time &y){
//	return x.sum() < y.sum();
//}

bool compare_tcome(const _time &x, const _time &y){
	return x.t_come < y.t_come;
}

//bool compare_teat(const _time &x, const _time &y){
//	return x.t_eat < y.t_eat;
//}


int main(){
	cin >> n;

	for(int i=0; i<n; i++)
		cin >> a[i].t_come;
	for(int i=0; i<n; i++){	
		cin >> a[i].t_eat;
	}
	
	sort(a,a + n,compare_tcome);
	
//	for(int i=1; i<n; i++){
//		front = i-1;
//		if(a[i].sum() == a[front].sum()){	
//			while(a[i].sum() == a[front].sum()){
//				i++;
//			}
//			back = i;	
//			sort(a+front,a+back,compare_teat);
//		}
//	}		
	processed();
	cout << endl;

	return 0;
}
