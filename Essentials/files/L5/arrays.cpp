#include<iostream>
using namespace std;

int main(){

	//int v1, v2, v3;
	
/*
	arr[0] = 10;
	arr[1] = 15;
	arr[2] = 20;
*/
	int n;
	cin >> n;
	int arr[1000000];
	//value = 10;
	for(int i = 0; i < n; i++){
			/*int value;
			cin >> value;
			arr[i] = value;
			*/
		cin >> arr[i];
	}

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}



