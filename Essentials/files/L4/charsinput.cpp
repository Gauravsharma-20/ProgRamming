#include<iostream>
using namespace std;

int main(){

	
	int count = 0;

	char currentChar;
	//cin >> currentChar;
	cin.get(currentChar);

	while(currentChar != '$'){
			count++;
			/*if(currentChar >= '0' && currentChar <= '9'){
				// digit
			}else if(){

			}else{
				// char
			}*/

			//	cin >> currentChar;
		cin.get(currentChar);
		
	}

	cout << count << endl;
	


}

