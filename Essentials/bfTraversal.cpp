#include<iostream>
using namespace std;


void dftraversal(int** adjMatrix, int v, int currentVertex,bool *visited){

	cout << currentVertex << " ";
	for(int i=0;i<v;i++)
    {
        if(adjMatrix[i][currentVertex]==1&& !visited[currentVertex])
        {
            visited[currentVertex] = true;
            dftraversal(adjMatrix,v,i,visited);
        }
    }

}
/*
6 7
0 6
6 1
6 2
2 5
0 3
3 4
*/

void dftraversal(int** adjMatrix, int v){
    bool *visited = new bool[v]();
	dftraversal(adjMatrix, v, 0,visited);
}


int main(){

	int v, e;

	cin >> v >> e;
	int** adjMatrix = new int*[v];

	for(int i = 0; i < v; i++){
		adjMatrix[i] = new int[v]();
	}

	for(int i = 0; i < e; i++){
		int v1, v2;
		cin >> v1 >> v2;
		adjMatrix[v1][v2] = 1;
		adjMatrix[v2][v1] = 1;
	}
	dftraversal(adjMatrix,v);

}
