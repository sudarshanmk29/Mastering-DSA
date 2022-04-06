#include <iostream>

using namespace std;

int main()
{
    int a[6] = {8,6,3,2,5,4};
    int temp,n = 6;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int x:a)
        cout<<x<<" ";
}