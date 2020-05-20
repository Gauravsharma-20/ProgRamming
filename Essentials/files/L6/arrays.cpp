#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int val){	

	int start = 0;
	int end = n - 1;

	while(start <= end){
			int mid = (start + end) / 2;
			if(arr[mid] == val){
					return mid;
			}else if(arr[mid] > val){
				// Left
				end = mid - 1;
			}else{
				// Right
				start = mid + 1;
			}
	}
	// Element Not Present in the array
	return -1;
}	


void printArray(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout << arr[i] <<  " ";
	}
	cout << endl;
}

void selectionSort(int arr[], int n){

	for(int i = 0; i < n - 1; i++){
		// We have to place correct minimum at index i
		//So Assuming that arr[i] is minimum for now
		int min = arr[i];
		int minPos = i;

		for(int j = i + 1; j < n; j++){
			// Compare min with element at index j
			if(arr[j] < min){
				min = arr[j];
				minPos = j;
			}
		}
		if(i != minPos){
		// Swap only if min is not at its correct position 
			int temp = arr[i];
			arr[i] = arr[minPos]; // min
			arr[minPos] = temp;
		}
		//cout << "i = " << i << endl;
		//printArray(arr, n);
	}

}


void bubbleSort(int arr[], int n){

	for(int round = 0; round < n - 1; round++){
		// One round of bubble Sort
		for(int i = 0; i < n - 1 - round; i++){
			// Compare adjacent elements	
			if(arr[i] >  arr[i + 1]){
				// Swap
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
		printArray(arr, n);
	}
	// Print Array
}

int main(){
	int arr[] = {8, 9, 4, 3, 6, 1};
	int n = 6;
	//bubbleSort(arr, n);
	selectionSort(arr, n);
}

