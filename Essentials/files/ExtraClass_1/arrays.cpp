#include<iostream>
using namespace std;

void print(int input[], int n){

	//cout << input << endl;
	cout << input << " size " << sizeof(input) << endl;

}

int main(){

	int a = 10;
	cout << sizeof(a) << endl; 

	int arr[10] = {5,1,7,9};

	cout << arr << " size " << sizeof(arr) << endl;
	print(arr);

}

