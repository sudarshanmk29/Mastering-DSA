#include <iostream>
using namespace std;

int main()
{
    int sn, min,max,n=11,sum=0,missing;
    int a[n] = {6,7,8,9,10,11,13,14,15,16,17};
    min = INT_MAX;
    max = INT_MIN;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>max)
            max = a[i];
        if(a[i]<min)
            min = a[i];
    }
    sn = ((min+max)*n)/2;
    for(int i=0;i<n-1;i++)
    {
        sum+=a[i];
    }
    if(sum!=sn)
        missing = sn-sum;
    
    cout<<missing<<endl;
}
