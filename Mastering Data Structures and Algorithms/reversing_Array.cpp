#include <iostream>

using namespace std;

int main()
{
    int *a,*b,i,j,n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    a = new int[n];
    b = new int[n];
    cout<<"Enter the elements in the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i = n-1;j=0;
    while(i>=0 && j<n)
    {
        b[j]=a[i];
        i--;
        j++;
    }
    cout<<"\nThe Array before reversing: ";
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    delete []a;
    a=b;
    b = NULL;

    cout<<"\n\nThe array after reversing is: ";
    for(int i = 0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}