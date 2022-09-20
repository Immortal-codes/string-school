#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    string str1="Geeks";
    string str2="forGeeks";

    string str3=str1+str2;
    //cout<<str3;
    int n=str3.length();
    //cout<<n;

    for (int i =12; i>=0; i--)
    {
       cout<<str3[i];
    }
    
}