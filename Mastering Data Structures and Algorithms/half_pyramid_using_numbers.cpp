#include<iostream>

using namespace std;

// int main()
// {
//     int n=5;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j<=i)
//                 cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }
int main()
{
    int n=5,r=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
                cout<<++r<<" ";
        }
        cout<<endl;
    }
}