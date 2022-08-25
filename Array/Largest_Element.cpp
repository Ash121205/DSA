#include <bits/stdc++.h>
using namespace std;

int largest(int arr[],int n,int max);
int main()
{
    cout << "Enter the size of your array: ";
    int n;cin >> n;int A[n];

    cout << "\nEnter the elements: ";
    for (int i=0;i<n;i++)
    cin >> A[i];

    int max = INT16_MIN;
    max = largest (A,n,max);

    cout << "The largest element present in the array is: " << max << "." << endl;
    return 0;
}

int largest (int arr[],int n, int max)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        max = arr[i];
    }
    return max;
}