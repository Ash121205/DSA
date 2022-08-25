#include<bits/stdc++.h>
using namespace std;

void LeftRotationOne(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        // swap(arr[i-1],arr[i]);
        arr[i-1] = arr[i];
        // arr[n-1] = temp;
    }
    arr[n-1] = temp;
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    LeftRotationOne(A,n);

    for(int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}