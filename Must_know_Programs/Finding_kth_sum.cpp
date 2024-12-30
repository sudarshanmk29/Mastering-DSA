/*Finding the elements whose sum will be equal to a given number.
Eg: a[1]+a[3] = 16;
    a[3]+a[5] = 16; */

#include<iostream>

using namespace std;

int main()
{
    int n, sum;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter the value of sum: ";
    cin>>sum;
    cout<<"The elements which provides the required sum are: "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j] == sum)
                cout<<a[i]<<"+"<<a[j]<<"="<<a[i]+a[j]<<endl;
        }
    }
}
