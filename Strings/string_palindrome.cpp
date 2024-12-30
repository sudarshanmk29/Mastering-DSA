#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string a,b;
    b = "";
    int flag = 0,l;
    cout<<"Enter the String: ";
    getline(cin,a);
    l = a.length();
    for(int i=l;i>=0;i--)
    {
        b+=a[i];
    }
    for(int i=0;i<l;i++)
    {
        if(a[i]==b[i+1])
            flag++;
    }
    if(flag==l)
        cout<<"PALINDROME"<<endl;
    else
        cout<<"NOT A PALINDROME"<<endl;
}