#include<iostream>
using namespace std;
#include<vector>

vector<int> getPath(int**adjM,int v1,int v2,int v,bool* visited)
{
    if(v1==v2)
    {
        vector<int> temp;
        temp.push_back(v1);
    }
    vector<int> ans;
    for(int i=0;i<v;i++)
    {
        if(adjM[v1][i]==1 && visited[i]==false)
        {
            visited[i] = true;
            vector<int> a = getPath(adjM,i,v2,v,visited);
            if(a.size()!=0)
            {
                ans = a;
                ans.push_back(v1);
            }
            else
            {
                return ans;
            }
        }
    }
    return ans;
}

vector<int> getPath(int**adjM,int v1,int v2,int v)
{
    bool* visited = new bool[v]();
    visited[v1] = true;
    return getPath(adjM,v1,v2,v,visited);
}

int main(){

	int v, e;

	cin >> v >> e;
	int** adjM = new int*[v];

	for(int i = 0; i < v; i++){
		adjM[i] = new int[v]();
	}

	for(int i = 0; i < e; i++){
		int v1, v2;
		cin >> v1 >> v2;
		adjM[v1][v2] = 1;
		adjM[v2][v1] = 1;
	}
	int v1,v2;
	cin>>v1>>v2;
    vector<int> ans = getPath(adjM,v1,v2,v);
    vector<int>::iterator it = ans.begin();
    while(it!=ans.end())
    {
        cout<<*it<<" ";
        it++;
    }
}
