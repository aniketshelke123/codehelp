#include <iostream>

using namespace std;

long long int sqrt(long long int N){

	long long ans = -1;
	long long s = 0, e = N; 
	long long mid = s + (e - s)/2;

	while(s <= e){
	if((mid * mid) == N){
	return mid;
	}
	else if((mid * mid) > N){
	e = mid - 1;
	}
	else if((mid * mid) < N){
	ans = mid;
	s = mid + 1;
	}
	mid = s + (e - s)/2;
	}
	return ans;
}

double morePrecision(int n, int precision, int tempSol){

	double factor = 1;
	double answer  = tempSol;
	for(int i = 0; i < precision; ++i){
		factor = factor/10;
		for(double j = answer; j*j< n; j= j + factor){
			answer = j;
		}
	}
	return answer;
}

int main(){

	int N;
	cout << "enter N: " ;
	cin >> N;
	int ans = sqrt(N); 
	cout << "Precision:" << ans << endl;
	
	cout << "more precision: " ;
	cout << morePrecision(N, 3, ans) << endl;

	return 0;
}
