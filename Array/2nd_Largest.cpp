#include <bits/stdc++.h>
using namespace std;

//not the best approach!!


// int largest(int arr[],int n)
// {
//     int max = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i] > max)
//         max = arr[i];
//     }
//     return max;
// }
// int second_largest(int arr[],int n)
// {
//     int max = largest(arr,n);
//     int ans = -1;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=max)
//         {
//             if(ans == -1)
//             ans = i;
//             else if(arr[i] > arr[ans])
//             ans = i;
//         }
//     }
//     return ans;

// }


// better approach:
int second_largest (int arr[],int n)
{
    int ans = -1;
    int max = 0;
    for (int i=1;i<n;i++)
    {
        if(arr[i]>arr[max])
        {
            ans = max;
            max = i;
        }
        else if(arr[i]!=arr[max])
        {
            if(ans == -1 || arr[i]>arr[ans])
            {
                ans = i;
            }
        }
    }
    return ans;
}

int main()
{
    cout << "Enter the number of elements:" << endl;
    int n;cin >> n;
    int A[n];
    cout << "Enter the elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }

    int answer = second_largest(A,n);
    if(answer == -1)
    {
        cout << "Second largest element didn't exist." << endl;
    }
    else
    {
        cout << "The second largest element in the array is "<< A[answer] << endl;
    }

    return 0;
}