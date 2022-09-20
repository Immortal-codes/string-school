#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    string str[] = {"Geek", "Geeks", "Geeksfor",
                    "GeeksforGeek", "GeeksforGeeks"};
int max=0;
int i;
    for (i = 0; i < 5; i++)
    {
        if (str[i].length()>str[max].length())
        {
            max=i;
        }
        
    }
    cout<<str[max];
}
