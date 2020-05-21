#include<iostream>
#include<stack>
using namespace std;
#include "StackUsingArrays.cpp"


int main(){

/*	stack<int> s;
	for(int i = 1; i <= 5; i++){
			s.push(i*10);
	}	

	while( !s.empty() ){
		cout << s.top() << endl;
		s.pop();
	}
*/
	
	StackUsingArrays<int> s;
	StackUsingArrays<int> s1(20);
	
	for(int i = 1; i <= 5; i++){
			s.push(i*10);
	}	

	while( !s.isEmpty() ){
		cout << s.pop() << endl;
	}
*/
	/*
	s.arr = new int[0];
	s.top = 100000;
	s.arr[0]
	*/
	//cout << s.top() << endl;


}

