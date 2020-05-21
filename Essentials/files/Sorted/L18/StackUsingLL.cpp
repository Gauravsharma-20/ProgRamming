class Node {
	  public :
		int data;
		Node *next;						    
		 Node(int data) {
			 this -> data = data;
			 next = NULL;
		 }
};

class StackUsingLL{

	Node* head;
	int currSize;

	StackUsingLL(){
		head = NULL;
		currSize = 0;
	}
	
	int size(){
		return currSize;
	}

	void push(){
	
		currSize++;
	}

	int pop(){
		currSize--;
	}

	int top(){
		if(head == NULL){
			return 0;
		}
		return head->data;
	}


};
