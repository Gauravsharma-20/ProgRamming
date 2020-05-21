#include<iostream>
using namespace std;
#include "QueueUsingArrays.h"


int main(){

	QueueUsingArrays<int> q;
	for(int i = 1; i <= 5; i++){
		q.enqueue(i * 10);
	}

	while(!q.empty()){
		cout << q.dequeue() << endl;
	}

}

