
template<typename T>
class QueueUsingArrays{

	T* arr;
	int frontIndex;
	int rearIndex; 
	int capacity; // Maximum size of Queue
	int size; // Number of elements present in Queue

	public:

	QueueUsingArrays(){
		capacity = 10;
		size = 0;
		arr = new T[capacity];
		frontIndex = -1;
		rearIndex = -1;
	}

	int getSize(){
		return size;
	}

	bool empty(){
		return size == 0;
	}
	
	T front(){
		if(frontIndex == -1){
			// Queue Underflow
			return 0;
		}
		return arr[frontIndex];
	}

	void enqueue(T elem){
		if(size == capacity){
			// Overflow
			return;
		}
		if(frontIndex == -1){
			frontIndex++;
		}
		rearIndex = (rearIndex + 1) % capacity;
		/*rearIndex++;
		if(rearIndex == capacity){
			rearIndex = 0;
		}*/
		arr[rearIndex] = elem;
		size++;

	}

	T dequeue(){
		if(size == 0){
			return 0;
		}
		size--;
		T temp = arr[frontIndex];
		if(frontIndex == rearIndex){
			// size - 1 case
			frontIndex = -1;
			rearIndex = -1;
		}else{
			frontIndex = (frontIndex + 1) % capacity;
			/*frontIndex++;
			if(frontIndex == capacity){
				frontIndex = 0;
			}*/
		}
		return temp;
	}

};
