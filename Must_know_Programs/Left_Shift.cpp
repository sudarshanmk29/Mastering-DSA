#include <iostream>

using namespace std;

int main()
{
    int a[10] = {6,3,2,5,9}, n=5,ln;
    cin>>ln;
    
    while(ln!=0)
    {
        for(int i=1;i<n;i++)
            a[i-1] = a[i];
        
        ln--;
        a[n-1] = 0;
    }
    
    cout<<"The new array is: "<<endl;
    for(int i =0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}