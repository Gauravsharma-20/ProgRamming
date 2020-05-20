#include<iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
	
	int i = 0, j = 0, k = 0;

	while(i < size1 && j < size2){
		if(arr1[i] <= arr2[j]){
			ans[k++] = arr1[i++];
		}else{
			ans[k++] = arr2[j++];
		}
	}

	// One array scan is complete
	// Copy Remaining Elements of array that is left
	while(i < size1){
			ans[k++] = arr1[i++];
	}
	while(j < size2){
		ans[k++] = arr2[j++];
	}

}

void insertionSort(int arr[], int n){
	for(int i = 1; i <n; i++){
		int j = i;
		while(j > 0 && arr[j - 1] > arr[j]){
			// compare jth element and j - 1th element
			//swap
			j--;
		}
	}

}

int main(){



}

