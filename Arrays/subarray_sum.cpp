#include <iostream>

using namespace std;

int main()
{
    int n,sum = 0;
    // cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    // cout<<"Enter the elements in the array: ";
    for(int i = 0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            cout<<sum<<" ";
        }
    }
}