

class Polynomial{

	//int degCoeff[1000];

	int* degCoeff;
	int maxDegree;

	public:

	Polynomial(){
		degCoeff = new int[1];
		maxDegree = 0;
		degCoeff[0] = 0;	
	}

	void setCoeff(int deg, int coeff){
		
		if(deg > maxDegree){
			// Save pointer to old array, so that you can copy its elements later
			int* temp = degCoeff;
			degCoeff 	= 	new int[deg + 1]{0};
			for(int i = 0; i <= maxDegree; i++){
				degCoeff[i] = temp[i];
			}
			/*
			for(int i = maxDegree + 1; i < deg; i++){
				degCoeff[i] = 0;
			}*/
			maxDegree = deg;
			delete [] temp;
		}
		degCoeff[deg] = coeff;
	}


	~Polynomial(){

		delete [] degCoeff;

	}

	

};
