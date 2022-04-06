#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *A = new int[n];
    for(uint8_t i = 0;i<n;i++)
    {
        cin>>A[i];
    }

    int max = A[0],min = A[n];
    for(int i=1;i<n;i++)
    {
        if(A[i]>max)
            max = A[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(A[i]<min)
            min = A[i];
    }
    delete []A; 
    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min<<endl;
}
    




