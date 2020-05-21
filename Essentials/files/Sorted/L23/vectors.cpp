#include<iostream>
#include<vector>
using namespace std;

int main(){

	vector<int> v;
	vector<int>* vptr = new vector<int>();
	vptr->push_back(10);
	vptr->push_back(20);
	vptr->push_back(30);
	cout << vptr->size() << endl;

	//Error cout << vptr[0] << endl;
	cout << vptr->at(0) << endl;
	cout << (*vptr)[0] << endl;
/*
	vector<int> v;
	cout << "Size " << v.size() <<  " Capacity " << v.capacity() << endl;
	for(int i = 1; i <= 9; i++){
		v.push_back(i);
		cout << "i " << i; 
	cout << " Size " << v.size() <<  " Capacity " << v.capacity() << endl;
	}

	v.pop_back();
*/
	/*v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	//cout << v.size() << endl;
//	cout << v[2] << endl;
//	v[0] = 100;

	cout << v[0] << endl;
	cout << v.at(0) << endl;
	v.at(10) = 100;
	//v[10] = 100;
	*/
	}

