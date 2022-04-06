#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n,c,sum=0,p;
    cin>>n;
    c = n;
    while(n>0)
    {
        p = n%10;
        sum+=pow(p,l);
        n = n/10;
    }
    if(sum==c)
        cout<<"Armstrong"<<endl;
    else
        cout<<"Not Armstrong"<<endl;
}