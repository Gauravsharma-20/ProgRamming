#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
#include "BinaryTreeNode.h"

BinaryTreeNode<int>* createTree(){
	BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(10);
	BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(20);
	BinaryTreeNode<int>* node3 = new BinaryTreeNode<int>(30);
	BinaryTreeNode<int>* node4 = new BinaryTreeNode<int>(40);
	BinaryTreeNode<int>* node5 = new BinaryTreeNode<int>(50);

	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node3->right = node5;
	return node1; // root
}

BinaryTreeNode<int>* takeInput(){

	BinaryTreeNode<int>* root = NULL;
	int rootData;
	//cout << "Enter root " << endl;
	cin >> rootData;
	if(rootData == -1){
		return root;
	}
	root = new BinaryTreeNode<int>(rootData);
	BinaryTreeNode<int>* leftTreeRoot = takeInput();
	root->left = leftTreeRoot;
	BinaryTreeNode<int>* rightTreeRoot = takeInput();
	root->right = rightTreeRoot;
	// root->right = takeInput();
	return root;
}

void print(BinaryTreeNode<int>* root){

	if(root == NULL){
		return;
	}
	cout << root->data << ": ";
	if(root->left != NULL){
		cout << "l: " << root->left->data <<", "; 
	}else{
		cout << "l: -1, "; 
	}
	if(root->right != NULL){
		cout << "R: " << root->right->data <<endl; 
	}else{
		cout << "R: -1" << endl; 
	}
	print(root->left);
	print(root->right);
}

// Count all nodes in the tree
int count(BinaryTreeNode<int>* root){

	if(root == NULL){
		return 0;
	}
	int leftCount = count(root->left);
	int rightCount = count(root->right);
	return leftCount + rightCount + 1  ;
}
/*
	int count(BinaryTreeNode<int>* root){
		return root == NULL ? 0 : count(root->left) + count(root>right) + 1;
	}

*/

BinaryTreeNode<int>* maxDataNode(BinaryTreeNode<int>* root) {
	if(root == NULL){
		return NULL;
	}

	BinaryTreeNode<int>* max = root;

	BinaryTreeNode<int>* leftMax =  maxDataNode(root->left);
	BinaryTreeNode<int>* rightMax =  maxDataNode(root->right);
	
	if(leftMax != NULL && leftMax->data > max->data){	
			max = leftMax;
	}
	if(rightMax != NULL && rightMax->data > max->data){
		max = rightMax;
	}
	return max;
}

BinaryTreeNode<int>* takeInputLevelWise(){

	BinaryTreeNode<int>* root;
	int rootData;
	cout << "Enter root " << endl;
	cin >> rootData;
	if(rootData == -1){
		return NULL;
	}
	root = new BinaryTreeNode<int>(rootData);
	// All node whose children are to be taken input, will be in this queue
	queue<BinaryTreeNode<int>* > pendingNodes;
	pendingNodes.push(root);
	while(! pendingNodes.empty()){
		BinaryTreeNode<int>* currentNode = pendingNodes.front();
		pendingNodes.pop();
		int leftChildData;
		cout << "Enter left child of " << currentNode->data << " " << endl;
		cin >> leftChildData;
		if(leftChildData != -1){
			BinaryTreeNode<int>* leftChild = new BinaryTreeNode<int>(leftChildData);
			currentNode->left = leftChild;
			pendingNodes.push(leftChild);
		}

		int rightChildData;
		cout << "Enter right child of " << currentNode->data << " " << endl;
		cin >> rightChildData;
		if(rightChildData != -1){
			BinaryTreeNode<int>* rightChild = new BinaryTreeNode<int>(rightChildData);
			currentNode->right = rightChild;
			pendingNodes.push(rightChild);
		}	
	}
	return root;	
}

int height(BinaryTreeNode<int>* root){
	return root == NULL ? 0 : max(height(root->left), height(root->right)) + 1;
}

// O(n * h)
int diameter(BinaryTreeNode<int>* root){

	if(root == NULL){
		return 0;
	}
	int op1 = height(root->left) + height(root->right) + 1;
	// LH and LD
	int op2 = diameter(root->left);
	// RH and RD
	int op3 = diameter(root->right);
	return max(op1, max(op2, op3));
}

class DiameterReturnType{
	public:
		int height;
		int diameter;
};

DiameterReturnType  diameterBetter(BinaryTreeNode<int>* root){

	DiameterReturnType ans;

	if(root == NULL){
		ans.height = 0;
		ans.diameter = 0;
		return ans;
	}

  DiameterReturnType leftAns  =	diameterBetter(root->left);
  DiameterReturnType rightAns  =	diameterBetter(root->right);
	ans.height = max(leftAns.height, rightAns.height) + 1;
	
	int op1 = leftAns.height + rightAns.height + 1;
	int op2 = leftAns.diameter;
	int op3 = rightAns.diameter;
	ans.diameter = max(op1, max(op2, op3));

	return ans;
}

void preOrder(BinaryTreeNode<int>* root){
	if(root == NULL){
		return;
	}
	cout << root->data << endl;
	preOrder(root->left);
	preOrder(root->right);
}


BinaryTreeNode<int>* constructFromPreIn(int* pre, int preS, int preE, int *in, int inS, int inE){

	if(inS > inE){
		return NULL;
	}

	// Tree Root
	int rootData = pre[preS];
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	//Search rootData in inorder(inS to inE) and find its index - x
	int x = inS;
	while(x <= inE && rootData != in[x]){
		x++;
	}

	int leftInS = inS;
	int leftInE = x - 1;
	int rightInS = x + 1;
	int rightInE = inE;
	int leftPreS = preS + 1;
	int rightPreE = preE;
	int leftSubTreeLength = leftInE - leftInS + 1;
	int leftPreE = leftPreS + leftSubTreeLength - 1;
	int rightPreS = leftPreE + 1;

	root->left = constructFromPreIn(pre, leftPreS, leftPreE, in, leftInS, leftInE);
	root->right = constructFromPreIn(pre, rightPreS, rightPreE, in, rightInS, rightInE);

	return root;
}

BinaryTreeNode<int>* constructFromPreIn(int* pre, int preLen, int* in, int inLen){

	return constructFromPreIn(pre, 0, preLen - 1, in, 0, inLen - 1);

}

void printTreeLevelWise(BinaryTreeNode<int>* root){

	if(root == NULL){
		return;
	}
	// Nodes which are yet to be printed
	queue<BinaryTreeNode<int>* > pendingNodes;
	pendingNodes.push(root);
	
	while(! pendingNodes.empty()){
		BinaryTreeNode<int>* currentNode = pendingNodes.front();
		pendingNodes.pop();

		/*if(currentNode == NULL){
			if(pendingNodes.empty){
				cout << endl;
				break;
			}else{
				cout << endl;
				pendingNodes.push(NULL);
			}
		}else{*/

		cout << currentNode->data<<":";
		if(currentNode->left != NULL){
			cout << "L:"  << currentNode->left->data;
			pendingNodes.push(currentNode->left);
		}else{
			cout << "L:-1";
		}
		if(currentNode->right != NULL){
			cout << ",R:"  << currentNode->right->data << endl;
			pendingNodes.push(currentNode->right);
		}else{
			cout << ",R:-1" << endl;
		}
	}
}
 class Node{
	    public:
			   T data;
				 Node<T> *next;			     
		     Node(T data){
					 this -> data = data;
					 this -> next = NULL;
				 }
 };

class BSTToLLReturnType{

	public:
		Node<int>* head;
		Node<int>* tail;

};

// pair<Node<int>*, Node<int>* > 
Node<int>* bstToLL(BinaryTreeNode<int>* root) {

	if(root == NULL){
		return NULL;
	}
	Node<int>* rootNode = new Node<int>(root->data);
	Node<int>* leftHead = bstToLL(root->left);
	Node<int>* rightHead = bstToLL(root->right);

	rootNode->next = rightHead;
	
	if(leftHead != NULL){
		Node<int>* leftTail = leftHead;
		while(leftTail->next != NULL){
			leftTail = leftTail->next;
		}	
		leftTail->next = rootNode;
		return leftHead; 
	}else{
		return rootNode;
	}
}

BinaryTreeNode<int>* constructTree(int *input, int s, int e) {

	if(s > e){
		return NULL;
	}

	// find Mid 
	// Create Root ->  element at mid index
	//Recursion  to create left sub tree (s to mid - 1)
	// Recursion to create right subtree (mid + 1 to e)

}

// 10 20 40 -1 60 -1 -1 -1 30 -1 50 70 -1 -1 -1
int main(){
	BinaryTreeNode<int>* root = takeInputLevelWise();
	//cout << count(root) << endl;
	print(root);
	/*	BinaryTreeNode<int>* root = createTree();
			cout << root->data << " L:  " << root->left->data <<  " " << " R: " << root->right->data << endl ;	
	 */
	/*	BinaryTreeNode<int> node(10);
			BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(20);

			cout << node.data << endl;
			cout << node1->data << endl; 
	 */

}

