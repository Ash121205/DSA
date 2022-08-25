#include<bits/stdc++.h>
using namespace std;
void movezeros(int arr[],int n)
{
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
        swap(arr[i],arr[count]);
        count++;
        }
    }
}
int main()
{
    int A[] = {8,5,0,10,0,20};
    int n = sizeof(A)/sizeof(A[0]);
    movezeros(A,n);

    for(int i=0;i<n;i++)
    cout << A[i] << " ";

    return 0;
}