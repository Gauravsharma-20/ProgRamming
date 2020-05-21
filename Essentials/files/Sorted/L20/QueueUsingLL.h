
template<class T>
class Node{

	public:
	T data;
	Node<T>* next;

	Node(T data){
		this->data = data;
	}

};

template<class T>
class QueueUsingLL{

	Node<T>* frontptr;
	Node<T>* rearptr;
	int size;

	QueueUsingLL(){
		frontptr = NULL;
		rearptr = NULL;
		size = 0;
	}

	T front(){
		if(frontptr == NULL){
			return 0;
		}
		return frontptr->data;
	}

	void enqueue(T elem){
		
		if(frontptr == NULL){

		}else{

		}
	}

	T dequeue(){
			
		// When there is only element and you are deleting that

	}

};
