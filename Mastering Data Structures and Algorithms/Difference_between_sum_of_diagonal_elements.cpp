#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n][n];
    int sum1 = 0, sum2 = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    int i=0;
    int j=0;
    while(i!=n and j!=n)
    {
        sum1+=A[i][j];
        i++;
        j++;
    }
    int k=0;
    int l = n-1;
    while(k!=n and l!=-1)
    {
        sum2+=A[k][l];
        k++;
        l--;
    }
    cout<<abs(sum1-sum2)<<endl;
}