#include<bits/stdc++.h>
using namespace std;

void maxheapify(int A[], int n, int i)
{
    int largest = i, left = 2*i+1, right = 2*i+2;

    if(left < n && A[left] > A[largest])
    {
        largest = left;
    }
    if(right < n && A[right] > A[largest])
    {
        largest = right;
    }

    if(largest != i)
    {
        swap(A[largest], A[i]);
        maxheapify(A, n, largest);
    }
}

void buildheap(int A[], int n)
{
    for(int i=(n-2)/2;i>=0;i--)
    {
        maxheapify(A, n, i);
    }
}

void heapsort(int A[], int n)
{
    buildheap(A, n);

    for(int i=n-1;i>=0;i--)
    {
        swap(A[0], A[i]);
        maxheapify(A, i, 0);
    }
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

    heapsort(A, n);

    for(int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}