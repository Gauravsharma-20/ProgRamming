#include<iostream>
using namespace std;

/*int power(int x, int n){
	if(n == 0){
		return 1;
	}
	return power(x, n - 1) * x;
}*/


int power(int x, int n){
	if(n == 0){
		return 1;
	}
	int smallAns = power(x, n / 2);
	if(n % 2 == 0){
		return smallAns * smallAns;
		//return power(x, n / 2) * power(x, n / 2);
	}else{
		return smallAns * smallAns * x;	
		//return power(x, n / 2) * power(x, n / 2) * x;
	}

}



int main(){



}

