#include <iostream>

#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string str="GeeksforGeeks"
    ;
    int n=str.length();
    //cout<<n;
    for (int i = 0; i < n; i=i+2)
    {
       cout<<str[i]<<" ";
    }
    
}