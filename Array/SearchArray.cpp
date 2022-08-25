#include <bits/stdc++.h>
using namespace std;

int linearSearch(int A[],int size, int x)
{
    for (int i=0;i<size;i++)
    {
        if(A[i]==x)
        return i;                    //return the index of the key element if found
    }
    return -1;
}
int main()
{
    cout << "Enter the size of the array :" << endl;
    int n, key;
    cin >> n;
    int A[n];

    cout << "Enter the array :" << endl;
    for (int i=0;i<n;i++)
    {
        cin >> A[i];
    }
    int size = sizeof(A)/sizeof(A[0]);

    cout << "Enter the key element to be found :" << endl;
    cin >> key;

    int result = linearSearch(A,size,key);   //remember that while passing an array as argument, just specify the name of the array only

    (result == -1)? cout << "Element is not present in array." : cout << "Element is present at index " << result << "." << endl;

    return 0;
}