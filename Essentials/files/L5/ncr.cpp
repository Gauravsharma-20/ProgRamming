#include<iostream>
using namespace std;


int factorial(int num){
	//int num;
	//cin >> num;
	int fact = 1;
	int i = 2;
	while(i <= num){
		fact = fact * i;
		i++;
	}
	return fact;
}
/*
void factorial(int num){
	// Calcuates and prints factorial
	int fact = 1;
	int i = 2;
	while(i <= num){
		fact = fact * i;
		i++;
	}
	cout << fact << endl;
	//return;
	//return fact;
}*/


int ncr(int n, int r){
	int factN = factorial(n); // callee
	int factR = factorial(r);
	int factNR = factorial(n - r);
	int ans = factN / (factR * factNR);	
	return ans; 
}

int main(){

	int n = 4;
	int ans = ncr(5,2);
	//factorial(n);
	//int ans = factorial(n);
	//cout << ans << endl;  




	/*int n, r;
	cin >> n >> r;
	int ans = ncr(n, r);	
	cout << ans << endl;	
	*/
//	int ans2 = ncr(7,4);
//	cout << ans2 << endl;
	/*
	int n, r;
	cin >> n >> r;

	int i = 2;
	int factN = 1;
	while(i <= n){
		factN = factN * i;
		i++;
	}
	cout << factN << endl;

	i = 2;
	int factR = 1;
	while(i <= r){
		factR = factR * i;
		i++;
	}
	cout << factR << endl;

	i = 2;
	int factNR = 1;
	while(i <= n - r){
		factNR = factNR * i;
		i++;
	}
	cout << factNR << endl;
	int ncr = factN / (factR * factNR);
	cout << ncr << endl;
	*/
}

