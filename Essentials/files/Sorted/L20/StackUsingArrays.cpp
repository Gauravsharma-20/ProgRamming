template<typename T>
class StackUsingArrays{


	T *arr;
	int topIndex; // Index of topmost element of stack
	int maxSize;

	public:

		StackUsingArrays(){
			maxSize = 10;
			arr = new T[maxSize];
			topIndex = -1;	
		}
	
		StackUsingArrays(int maxSize){
			this->maxSize = maxSize;
			arr = new T[maxSize];
			topIndex = -1;	
		}

		// O(1)
		int size(){
				return topIndex + 1;
		}
		// O(1)
		bool isEmpty(){
				return topIndex == -1;
		}
		//O(1)
		void push(T elem){
			if(topIndex == maxSize - 1){
				// Stack is full - Stack Overflow
				// Raise an Exception
				//return;
				doubleStackCapacity();
			}
			arr[++topIndex] = elem;
		}

		void doubleStackCapacity(){
			int* oldArray = arr;				
			arr = new int[2 * maxSize];
			for(int i = 0; i < maxSize; i++){
				arr[i] = oldArray[i];
			}
			delete [] oldArray;
			maxSize = 2*maxSize;
		}

		//O(1) 
		T pop(){
			if(topIndex == -1){
				// Stack Underflow 
				// Thrown exception
				return 0;
			}
			return arr[topIndex--];
		}

		//O(1) 
		T top(){
			if(topIndex == -1){
				// Stack Underflow 
				// Thrown exception
				return 0;
			}
			return arr[topIndex];
		}
	

};
