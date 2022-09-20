#include<iostream>

#include<algorithm>

#include<string.h>

using namespace std;

int main()
{
    string str = "101";

    for (int i = 0; i < 3; i++)
    {
        if (str[i]!=0 && str[i]!=1)
        {
           cout<<"yes";
        }
        else
        {
            cout<<"no";
        }
        
    }
    
}