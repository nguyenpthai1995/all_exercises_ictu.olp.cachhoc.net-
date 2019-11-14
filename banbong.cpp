#include<iostream>
using namespace std;
int n,a[30], b[2], _max=0, score = 0;

int maxScore(int front, int end, int d){
	if(front == end){
		if(score > _max)
			_max = score;	
	}else{
		if(d%2 != 0){  //luot cua may
			if(a[front] > a[end])
				maxScore(front+1,end,d+1);
			else
				maxScore(front,end-1,d+1);
		}else{  //luot cua nguoi choi
			/*b[0] = a[front];
			b[1] = a[end];
			for(int i=0; i<2; i++){
				score += b[i];
				if(i==0){
					maxScore(front+1,end,d+1);
					score -= b[i];
				}else{
					maxScore(front,end-1,d+1);
					score -= b[i];
				}
			}*/
			score += a[front];
			maxScore(front+1,end,d+1);
			score -= a[front];
			score += a[end];
			maxScore(front,end-1,d+1);
			score -= a[end];	
		}	
	}
	return _max;
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	cout << maxScore(0,n-1,0) << endl;	
	//maxScore(0,n-1,0);
	return 0;
}
