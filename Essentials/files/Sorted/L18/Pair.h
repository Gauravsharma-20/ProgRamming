template<typename T, typename Q>
class Pair{

	public:
		T first; // Min
		Q second; // Max

		Pair(){

		}

		Pair(T first, Q second){
			this->first = first;
			this->second = second;
		}

		void print(){
			cout << first <<  " " << second << endl;
		}

};
