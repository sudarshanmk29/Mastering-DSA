/* Printing a rhombus pattern*/

#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int q = (n*2)-1;
    int p = q/2+1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=q;j++)
        {
            if(j>=p)
                cout<<"*"<<" ";
            else
                cout<<" ";
        }
        p--;
        q--;
        cout<<endl;
    }
}