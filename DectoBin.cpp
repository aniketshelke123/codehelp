#include<iostream>

#include<math.h>

using namespace std;
int main(){
	int n ;
	cin >> n;

	int ans = 0;
	int i = 0;
	while(n != 0){

		//n&1 give us the last digit 0 or 1
		int bit = n & 1;

		ans = (bit * pow(10, i)) + ans;

		//after noting last bit we need to shift 'n' right
		n = n >> 1;
		i++;
	}
	cout << "ANSWER IS: " << ans << endl;
	return 0;
}
