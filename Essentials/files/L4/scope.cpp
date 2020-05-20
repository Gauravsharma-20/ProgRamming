#include<iostream>
using namespace std;


// scope and lifetime

int main(){
	
	int i = 1;
	for(; i <= 5; i++){
		int b = 10;
		cout << b << endl;
		b++;
	}

	cout << i << endl;


/*	int i = 1;
	int b = 10;
*/
/*	while(i <= 5){
		b = 10;
		cout << b << endl;
		i++;
		b++;
	}
*/
	//cout << i << endl;
	//cout << i << " " << b << endl;


 /*	i = 1000;

	cout << i << endl;
	int b = 50;

	if(i >= 10){
		b = 100;
		cout << b << endl;
	}

	cout << b << endl;
*/


}



