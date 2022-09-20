#include <iostream>

#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string Str = "welcome to geeksforgeeks";
    int i;
    for (int i = 0; i < Str.length(); i++)
    {
        if (Str[i] == 'a' || Str[i] == 'e' || Str[i] == 'i' || Str[i] == 'o' || Str[i] == 'u')
        {
            continue;
            
        }
        cout<<Str[i];
    }
    

}