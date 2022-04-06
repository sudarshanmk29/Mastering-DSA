#include <iostream>

using namespace std;

int main()
{
    int a[10]= {6,3,2,5,9},n,nr;
    n = 5;
    nr = 2;
    while(nr!=0)
    {
        for(int i=n-1;i>=0;i--)
            a[i+1] = a[i];
        
        nr--;
        a[0]=1;
    }

    cout<<"The new array: "<<endl;
    for(int i= 0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
