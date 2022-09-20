#include <iostream>

#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string str = "ckjkUUYII";
    int n=0;
    int m=0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>=90 && str[i]<=116)
        {
            n++;
        }
        else
        {
            m++;
        }

        
    }
    cout<<m<<endl;
    cout<<n;
    
}