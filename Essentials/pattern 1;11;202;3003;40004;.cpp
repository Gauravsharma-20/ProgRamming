#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,k=1;
    cin>>n;
	for(int i=0;i<n;i++)
    {
        if(i>=2)
            {
                k++;
            }
        cout<<k;
        for(int j=0;j<=i-2;j++)
        {
            cout<<0;
        }
        if(i>0)
        {
            cout<<k;
        }
        cout<<endl;
    }
}
