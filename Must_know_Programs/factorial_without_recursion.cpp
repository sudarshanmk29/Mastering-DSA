#include <iostream>

using namespace std;

int main()
{
    int n,prod=1;
    cin>>n;
    if(n==0)
        cout<<1;
    else
    {
        for(int i=n;i>0;i--)
            prod = prod*i;
    }
    cout<<prod<<endl;
}