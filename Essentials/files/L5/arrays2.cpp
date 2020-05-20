#include<iostream>
using namespace std;


void print(int arr[], int n){

//	cout << arr[0] << endl;
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}

}

void increment(int arr[]){
	arr[0]++;
}

void incrementNum(int n){
	n++;
}

int main(){

	int num = 10;
	incrementNum(num);
	cout << num << endl;

	int n = 4;
	int arr[]  = {6,1,4,6};	
	increment(arr);
	print(arr, n);

//	cout << arr << endl;
//	cout << arr[2] << endl;

	/*for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
*/

}

