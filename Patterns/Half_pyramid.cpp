/*Print the following pattern:
      *
    * *
  * * *
* * * * 
*/

#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    // cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<=n;j++)
        {
            if(j>=i)
                cout<<"*";
            else    
                cout<<" ";
        }
        cout<<endl;
    }
}

