#include<iostream>
using namespace std;


void demo(int n){
	if(n < 10){
		return;
	}
}

int factorial(int num){
	//int num;
	//cin >> num;
	//cout << var << endl;
	int fact = 1;
	int i = 2;
	while(i <= num){
		fact = fact * i;
		i++;
	}
	return fact;
}

void increment(int n){
	n++;
	cout <<"Increment " <<  n << endl;
}

int main(){

	int n = 5;
	increment(n);
	cout <<"Main " <<  n << endl;

/*	int var = 100;
	int n = 5;
	int ans = factorial(n);
	cout << fact;
	cout << ans << endl;
	cout << "Inside Main " << endl;
*/
	/*	int ans = demo(n);
	cout << ans << endl;
*/
	return 0;
}






