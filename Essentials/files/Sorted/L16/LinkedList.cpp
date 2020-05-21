#include<iostream>
using namespace std;
#include "Node.h"

Node* createList(){
	Node* n1 = new Node(10);
	Node* n2 = new Node(20);
	Node* n3 = new Node(30);
	Node* n4 = new Node(40);

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;

	return n1;
/*	Node n1(10);
	Node n2(20);
	Node n3(30);

	n1.next = &n2;
	n2.next = &n3;
	
	cout <<"&n1 " << &n1 << " " <<  n1.data << " " << n1.next << endl;
	cout <<"&n2 " << &n2 << " " << n2.data << " " << n2.next << endl;
	cout <<"&n3 " << &n3 << " " <<  n3.data << " " << n3.next << endl;

	Node* head = &n1;
	return head;
	*/
}

void print(Node* head){

	Node* temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
	/*while(head != NULL){
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
	*/
	//cout << head->data << endl;
	//cout << head->next->data << endl;
	//cout << head->next->next->data << endl;
}

void demo(Node* head){


	Node* temp; // this will only create pointer and that too with garbage address
	temp = new Node(1);
	temp->data = 10;
	head = new Node(10);
	//head->data = 60;
	//Runtime error -  head->next->next;
	//head = head->next;
	//head->next = head;
}

Node* insertNode(Node *head, int pos, int data) {

	// This is the node to be inserted
	Node* newNode = new Node(data);

	if(pos == 0){
		newNode->next = head;
		// Bakwas
		//head = newNode;
		return newNode;
	}else{		
		int i = 0;
		Node* prev = head;
		while(prev!= NULL && i < pos - 1){
			prev = prev->next;
			i++;
		}
		// prev will point to Node at pos - 1
		if(prev != NULL){
			newNode->next = prev->next;
			prev->next = newNode;
		}
		return head;
	}
}

int main(){
	Node* head = 	createList();
	head = insertNode(head,0, 80); 
	print(head);
	//demo(head);
	//print(head);
	//print(head->next);


/*
	Node n1(10);
	cout << n1.data << " " << n1.next << endl;
	Node* n2 = new Node(20);
	cout << n2->data << " " << n2->next << endl;
*/

}

