#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string str="geeks  for geeks";
    int n=str.length();
    cout<<n<<endl;
    string st;
    
    for (int i = 0; i < n; i++)
    {
        
        if (str[i]==' ')
        {
           continue;
        }
        st.push_back(str[i]);
        
    }
    cout<<st;
    
    
    
}