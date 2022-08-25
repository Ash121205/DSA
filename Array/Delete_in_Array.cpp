#include <bits/stdc++.h>
using namespace std;

int del (int arr[], int n, int target);

int main()
{
    int n, x;                                     //x->target element to be deleted
    cout << "Enter the length of array: ";
    cin >> n;
    int A[n];
    cout << "\nEnter the elements of the array: ";
    for(int i=0;i<n;i++)
    cin >> A[i];

    cout << "\nEnter the target element to delete: ";
    cin >> x;
    
    n = del(A, n, x);

    cout << endl << "The array after deletion of the target element: ";    
    for (int i=0;i<n;i++)
    cout << A[i] << " ";
    
    return 0;
}
int del (int arr[], int n, int target)
{
    int i;
    for(i=0;i<n;i++)
    {
        // if(arr[i]!=target)
        // cout << "Target element not present in array." << endl;
        if(arr[i]==target)
        break;
    }
    
    for(int j=i;j<n-1;j++)
    arr[j] = arr[j+1];
    
    return (n-1);
}