#include <iostream>

using namespace std;

bool isprime(int n)
{
    if(n<2)
        return 0;
    else
    {
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                return 0;
                break;
            }
        }
    }
    return 1;
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
            cout<<i<<" ";
    }
}