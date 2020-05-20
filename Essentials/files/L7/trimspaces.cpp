#include<iostream>
using namespace std;

void trimSpaces(char input[]){

	int i = 0;
	int nextChar = 0; // index at which next non space char should be placed

	while(input[i] != '\0'){
		if(input[i] != ' '){
			// Place this non space char at nextChar index
			input[nextChar] = input[i];
			nextChar++;
		}
		i++;
	}
	// Shift '\0' after completing task
	input[nextChar] = '\0';
}


int main(){
	char line[]  = "a b cd de";
	trimSpaces(line);
	cout << line << endl;
}

