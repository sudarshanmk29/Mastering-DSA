#include <iostream>

using namespace std;

int main()
{
    int a[10] = {8,9,4,7,6,3,10,5,14,2},flag = -1,key;
    cout<<"Enter the Key: ";
    cin>>key;
    for(int i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            flag = i;
            break;
        }
    }
    if(flag==-1)
        cout<<"Search Unsuccessful"<<endl;
    else
        cout<<"Index: "<<flag<<endl;


}