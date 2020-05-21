#include<iostream>
#include<stack>
using namespace std;

bool checkBalanced(char *exp) {
	 stack<char> s;
	 for(int i = 0; exp[i] != '\0'; i++){
			
		 if(exp[i] == '[' || exp[i] == '{' || exp[i] == '('){
			 s.push(exp[i]);
		 }else if(exp[i] == ']'){
		 		if( !s.empty() && s.top() == '['){
					// This Pair of brackets is balanced out
					s.pop();
				}else{
					return false;
				}
		 }
		 /*
			if(s.empty()){
			return true;
			}else{
			return false;
			}*/
		 return s.empty();
	}

}

void reverseStack(stack<int>& s, stack<int>& helper){

	if(s.size() <= 1){
		return;
	}
	// Remove an element
	// Recursion
	// Copy and transfer

}

int main(){

	stack<int> s, h;
	s.push(3);
	s.push(2);
	s.push(1);
	reverseStack(s, h);
	cout << s.top() << endl;


	/*int i = 10;
	int* p = &i;
	int &b = i;
	b++;
	*/
	/*
	stack<int> s;
	s.push(2);
	s.push(1);
	reverseStack(s);
	cout << s.top() << endl;
	*/
}





