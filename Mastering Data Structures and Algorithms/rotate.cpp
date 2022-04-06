#include <iostream>

using namespace std;

int main()
{
    int a[10] = {1,2,3,4,5},n = 5,temp,nl;
    nl = 2;
    //With left shift
    // while(nl!=0)
    // {
    //     temp = a[0];
    //     for(int i =1;i<n;i++)
    //         a[i-1] = a[i];
    //     a[n-1] = temp;
    //     nl--;
    // }

    while(nl!=0)
    {
        temp = a[n-1];
        for(int i=n-1;i>=0;i--)
            a[i+1] = a[i];
        a[0] = temp;
        nl--;
    }

    cout<<"The new Array: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}