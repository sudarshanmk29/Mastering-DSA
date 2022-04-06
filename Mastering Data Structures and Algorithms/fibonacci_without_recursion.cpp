#include <iostream>

using namespace std;

//Fibonacci Series using normal for loop without recursion
int fibonacci(int n)
{
    int sum,previous_term = 0, next_term = 1;
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    for(int i=1;i<=n-1;i++)
    {
        sum = previous_term+next_term;
        previous_term = next_term;
        next_term  = sum;
    }
    return sum;
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



