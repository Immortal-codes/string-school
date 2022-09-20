#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string str="GeeksforGeeks";
    int n=str.length();
    cout<<n<<endl;
    
    for (int i = n-1; i>=0; i--)
    {
        cout<<str[i];
    }
    
    
}