#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string str = "geeks";

    int n=str.length();

    for (int i = 0; i < n; i++)
    {
        if (str[i]!=str[i+1])
        {
            cout<<"No";
            break;
          
        }
        else{
            cout<<"yes";
        }
        
        
        
        
    }
    
}