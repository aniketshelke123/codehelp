#include<iostream>
using namespace std;

int findUnique(int arr[], int size){
	int ans = 0;
	for (int i = 0; i < size; i++){
		//using XOR as same element XOR is zero
		ans = ans^arr[i];
	}
	return ans;
}

int main(){

	int n;
	cout << "enter n: ";
	cin >> n;

	int arr[n];
	
	//taking input in array
	cout << "Enter element with space: ";
	for (int i = 0; i < n; i++){
		int input;
		cin >> input;
		arr[i] = input;
	}
	
	cout << "Unique element is: " << findUnique(arr, n);
	cout << endl;
	return 0;
}

