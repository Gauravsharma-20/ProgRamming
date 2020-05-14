#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int subsequences(string str, string output[])
{
    if(str.size() == 0)
    {
        output[0] = ' ';
        return 1;
    }
   string s[1000];
   int smallcount = subsequences(str.substr(1),s);
   int i=0;
   for(i=0;i<smallcount;i++)
   {
      output[i] = str[0] + s[i];
   }
   for(int j=0;j<smallcount;j++)
   {
       output[i] = s[j];
       i++;
   }
    return i;
}

int main()
{
    string output[1000];
    string str = "abcdef";
    int count = subsequences(str,output);
    for(int z=0;z<count;z++)
    {
        cout<<output[z]<<endl;
    }
}
