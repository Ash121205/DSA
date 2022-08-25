
#include<bits/stdc++.h>
using namespace std;

void ArrayReverse(int arr[],int n)
{
    int low = 0,high = n-1;

    while(low < high)
    {
        // int temp = arr[low];
        // arr[low] = arr[high];
        // arr[high] = temp;
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main()
{
    cout << "Enter the length of the array: ";
    int n;
    cin >> n;
    int A[n];
    cout << "Enter the array: ";
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    ArrayReverse(A,n);

    for(int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }    

    return 0;
}