#include <iostream>

using namespace std;

int main()
{
    int a[10] = {6,1,2,8,3,4,7,10,5};
    int high,low,mid,key;
    cout<<"Enter the key element: ";
    cin>>key;
    low = 0;
    high = 10;
    mid = -1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(a[mid]==key)
        {
            break;
        }
        else if(key<a[mid])
            high = mid-1;
        else if(key>a[mid])
            low = mid+1;

    }
    if(mid!=-1 && low<=high)
        cout<<"Index: "<<mid<<endl;
    else
        cout<<"Element not found"<<endl;
}
