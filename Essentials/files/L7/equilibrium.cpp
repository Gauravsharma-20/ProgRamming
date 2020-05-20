#include<iostream>
using namespace std;

int equilibriumIndex(int arr[], int n){

	int leftsum = 0, rightSum = 0;
	for(int i = 0; i < n; i++){
		/*
			 leftSum = 0;
		for(int j = 0; j < i; j++){
			leftSum += arr[j];
		}
		Same for rightSum
	*/
		if(leftSum == rightSum){
			return i;
		}
		leftSum += arr[i];
	}
	// There isn't any equilibrium index
	return -1;
}


int main(){



}

