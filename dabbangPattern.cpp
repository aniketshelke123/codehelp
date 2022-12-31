#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	int row = 1;

	while(row <= n){

		//1st triangle
		int j = n - row + 1;
		int count = 1;
		while(j){
			cout << count << " ";
			count++;
			j--;
		}

		//2nd triangle
		int k = row - 1;
		while(k){
			cout << "*" << " ";
			k--;
		}

		//3rd triangle
		int l = row - 1;
		while(l){
			cout << "*" << " ";
			l--;
		}

		//4th triangle
		int m = n - row + 1;
		int count2 = m;
		while(m){
			cout << count2 << " ";
			count2--;
			m--;
		}


		cout << endl;
		row++;
	}
	return 0;
}
