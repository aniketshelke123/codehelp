
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
	for (int i = 0; i < size; i++){
		cout << arr[i] << " " ;
	}
	cout << endl;
}

void sort012(int arr[], int size){

	int c = 0;
	int half = size/2;
	while(c < 2){
		int left = 0, right = 0;
		while(right > half){
			if((arr[right] == int(c)) && (arr[left] > int(c))){
				cout << "as"<< endl;
				swap(arr[left], arr[right]);
				cout << "as"<< endl;
				right--;
				left++;
			}
			else if(arr[left] <= c){
				left++;
			}
		}
		++c;
		left = 0;
		right = 0;
	}
}


int main(){
	int arr[8] = {1, 2, 1, 2, 0, 0, 2, 1};

	sort012(arr, 8);
	printArray(arr, 8);

	return 0;

}
