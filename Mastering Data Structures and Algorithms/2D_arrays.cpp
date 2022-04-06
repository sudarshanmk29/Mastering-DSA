//Accepting and Printing values of a 2D Array

#include <iostream>

using namespace std;

int main()
{
    int **A;
    A = new int *[3];
    for(int i = 0;i<3;i++)
    {
        A[i] = new int[3];
    }
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Printing the elements in the array"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
