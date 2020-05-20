#include<iostream>
using namespace std;

int main(){

	int n;
	cin >> n;

	int count = 0;

	int powerOf5 = 5;

	while(powerOf5 <= n){
		count += n / powerOf5 ; // 5 25 125 625
		powerOf5 = powerOf5 * 5;
	}
	cout << count << endl;
	

	/*int num = 1;
	int ans = 1;

	while(num <= n){
		ans = ans * num;
		num++;
	}
	// ans has factorial of n

	// Count trailing zeros
	int countZeros = 0;
	//int rem = ans % 10;
	while(ans > 0 && ans % 10 == 0){
		countZeros++;
		ans = ans / 10;
		//rem = ans % 10;
	}*/
// OR 

/*	while(ans > 0){
		int rem = ans % 10;
		if(rem != 0){
			break;
		}
		count++;
		ans = ans / 10;
	}
*/



}

