#include<iostream>

using namespace std;

int main()
{
    int a[10] = {1,3,4,5,6,8,9,10,12,14};
    int n = 10, sum = 16;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j] == sum)
                cout<<a[i]<<"+"<<a[j]<<"="<<a[i]+a[j]<<endl;
        }
    }
}