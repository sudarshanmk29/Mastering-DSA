//Fibonacci using recursion
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1||n==2)
        return 1;
    else
        return (fibonacci(n-1)+fibonacci(n-2));
}

int main()
{
    int n,ans;
    cin>>n;
    cout<<"The fibonacci series is: ";
    for(int i=0;i<n;i++)
    {   
        ans = fibonacci(i);
        cout<<ans<<" ";
    }
}