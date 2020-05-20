#include<iostream>
using namespace std;

int main(){


	int n;
	cin >> n;

	for(int num = 2; num <= n; num++){
		// To check every number
		int div = 2;
		// divide by all numbers from 2 to num - 1
		// this will tell whether current num is prime or not
		bool isPrime = true; // Initial assumption is that num is prime 
		while(div < num){
			if(num % div == 0){
				// Current Number is composite
				isPrime = false;
				break;
			}
			div++;
		}
		if(isPrime == true){
			cout << num << endl;
		}
		/*
		if(div == num){
			cout << num << endl;
		}*/
	}


}

