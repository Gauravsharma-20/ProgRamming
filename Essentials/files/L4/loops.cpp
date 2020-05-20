#include<iostream>
using namespace std;

int main(){

	int n = 5;

	int i = 1;
	while(i <= n){
		int j = 1;
		while(j <= n){
			cout << j;
			if(j == i){
				return 0;
			}
			j++;
		}
		cout << endl;
		i++;
	}
	cout << "Outside While " << endl;
/*	for(int i = 1; i <= n; i++){
		cout << i << endl;
	}
*/
}

