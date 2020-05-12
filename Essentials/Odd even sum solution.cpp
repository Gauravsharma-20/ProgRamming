#include<iostream>
using namespace std;

int main()
{
   int n,k,sume=0,sumo=0;
   cin>>n;
   while(n!=0)
   {
       k=n%10;
       if(k%2==0)
       {
           sume = sume +k;
       }
       else
       {
           sumo = sumo +k;
       }
       n= n/10;
   }
   cout<<sume<<" "<<sumo<<endl;
}
