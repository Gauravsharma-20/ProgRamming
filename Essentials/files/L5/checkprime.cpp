#include<iostream>
using namespace std;


void demo(int n){

	int i = 1;
	while(i <= n){
		if(i == 3){
			//break;
			return;
		}
		cout << i << endl;
		i++;
	}
	cout << "Inside Demo " << endl;
}

int main(){

	int n = 5;
	demo(n);
	//bool isPrime  = checkPrime(n); 
}

