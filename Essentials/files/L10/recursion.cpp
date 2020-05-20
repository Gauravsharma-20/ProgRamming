#include<iostream>
using namespace std;

int fact(int n){
	if(n == 0){
		return 1;
	}
	//int b = 10;
	return n * fact(n - 1);
}

// Recursion Moving from 1st Number to Last 
int sum(int input[], int n) {
	
	if(n == 0){
		return 0;
	}
	// Recursion
	int smallAns = sum(input + 1, n - 1);
	int ans = input[0] + smallAns;
	return ans;
}

// Recursion Moving from Last Number to First 
int sum2(int input[], int n){
	if(n == 0){
		return 0;
	}
	// Recursion on elements except last
	int smallAns = sum(input, n - 1);
	int ans = smallAns + input[n - 1];
	return ans;
}


int main(){
	int n = 5;
	int input[] = {4,8,2,1,3};
	cout << sum(input, n) << endl;
	//	cout << fact(n) << endl;
}

