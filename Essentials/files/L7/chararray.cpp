#include<iostream>
#include<cstring>
using namespace std;


///int print(int arr[], int n)


int length(char input[]){

	int count = 0;
	while(input[count] != '\0'){
		count++;
	}
	return count;
}


int main(){


	char line[100]; // = {'a','b','g','h','\0','i','j'};
	//cin >> word;
	cin.getline(line, 100);
	cout << line << endl;

	//cout << strlen(word) << endl;
	// int arr1[] = {1,2,3}; 

//	char arr[10] = {'t','h','a','t'};

	//	char name[] = "Manisha";	
	//cout << arr[0] << endl;
/*	cout << arr1 << endl;
	cout << arr << endl;
*/
}

