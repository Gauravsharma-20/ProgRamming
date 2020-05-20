#include<iostream>
using namespace std;


void C(int a){
	a++;
	cout << "Inside C " << " a " << a << endl;
}

void B(int a){
	a++;
	C(a);
	cout << "Inside B " << " a " << a << endl;
}


void A(int a){
	a++;
	B(a);
	cout << "Inside A " << " a " << a << endl;
}


int main(){
	int a = 10;
	A(a);
	cout << "Inside Main " << " a " <<  a << endl;
}

