#include<iostream>
using namespace std;

int main(){

	// Print numbers from 1 to n
	int n;
	cin >> n;
	// i will run for every row
	int i = 1;
	while( i <= n  ){
	
		int j = 1;
		while(j <= n){
			cout << "*";
			j = j + 1;
		}
		cout << endl;
		i = i + 1;
	}


}

