#include<iostream>
using namespace std;

class Pair{

	public:
		int first; // Min
		int second; // Max

		Pair(){

		}

		Pair(int first, int second){
			this->first = first;
			this->second = second;
		}

};

Pair  minMax(int arr[], int n){

	int min = arr[0];
	int max = arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] < min){
			min = arr[i];
		}

		if(arr[i] > max){
			max = arr[i];
		}

	}
	Pair ans(min, max);
	return ans; 

}


int main(){
	int arr[] = {2,6,1,8,11};
	Pair ans =	minMax(arr, 5);
	cout << ans.first << " " << ans.second << endl;

}





