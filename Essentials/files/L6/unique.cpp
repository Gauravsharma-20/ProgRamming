#include<iostream>
using namespace std;


int findUnique(int arr[], int n){
	// For every element in array
	for(int i = 0; i < n; i++){
		bool isUnique = true;	
		// Compare ith element with every other element in array
		int j = 0;
		for(; j < n; j++){
				if(i != j && arr[i] == arr[j]){
					// Not Unique
					isUnique = false;
					break;
				}
				// Else compare with next number i.e. increase j by 1
		}
		if(j == n){
			// Number is Unique
			return arr[i];
		}
	/*
		if(isUnique){
			// Number is unique
			return arr[i];
		}*/
	}
	// With correct inputs, this will never run
	return 0;
}


int main(){

	int arr[] = {2,3,1,3,2};
	int n = 5;
	cout << findUnique(arr, n) << endl;
}

