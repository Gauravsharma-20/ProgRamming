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
				return;
			}
			arr[++topIndex] = elem;
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
