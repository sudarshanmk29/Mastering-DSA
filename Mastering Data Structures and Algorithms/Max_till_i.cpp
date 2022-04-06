/* Find the maximum element from 0 to i
Example: consider an array A[]={1,0,5,4,6,8}
when i=0 --> max = 1
when i=1 --> max = 1
when i=2 --> max = 5
when i=3 --> max = 5
when i=4 --> max = 6
when i=5 --> max = 8*/

#include <iostream>

using namespace std;

int main()
{
    int max, n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    max = INT_MIN;

    cout<<"The Maximum elements are: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        cout << max << " ";
    }
}
