#include <bits/stdc++.h>
using namespace std;

int insert(int arr[], int cap, int n, int element,  int index, int pos);
int printArray(int arr[], int n);
// {
//     index = pos - 1;
//     for (int i=n-1; i>=index; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[index]=element;
//     return (n+1);
// }

int main()
{
    int n, p, cap=n+1, x;                                              //x->element to be inserted
    cout << "Enter the size of your array : ";
    cin >> n;
    int A[1000];
    cout << endl << "Now enter the elements of your array : ";
    for (int i=0;i<n;i++)
    {
        cin >> A[i];
    }

    cout << endl << "You have received 1 extra spaces for your array."<< endl;
    cout << "Do you wish to add any element to your array?" << endl;
    cout << "Press 1 if your answer is yes OR press 0 if your answer is no." << endl;

    int response;
    cin >> response;

    switch(response)
    {
        case 0: cout << "Your array is ";
        for (int i=0;i<n;i++)
        cout << A[i];
        cout << ".";
        break;

        case 1: cout << "The array (for now) is: " << endl;
        for(int i=0;i<n;i++)
        cout << A[i] << " ";

        cout << endl << "Enter the position at which you wish to insert your number: ";
        cin >> p;
        cout << endl <<"Enter your element which you want to insert: ";
        cin >> x;
        n = insert (A,n+1,n, x, p-1,p);      //remember to use the variable. don't simply call the function if you wish that the value of n should get updated. REMEMBER THESE BASICS!!!! BAKAYADA
        cout << endl << "Your array after inserting " << x << ": ";
        
        // if(n==cap)
        // {
        //     cout << "You have exhausted your rewarded spaces in the array." << endl;
        //     cout << "Your final array is: " << endl;
        //     for (int i=0;i<cap;i++)
        //     cout << A[i] << " ";
        // }
        // for (int i=0;i<n+1;i++)
        // cout << A[i] << " ";
        printArray(A,n);
        break;

        default : cout << "Invalid response :(";
    }
    return 0;
}
int printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    cout <<arr[i] << " ";      //remember to use the array you gave in the parameter of the def. of the function.
}

int insert(int arr[], int cap, int n, int element,  int index, int pos)
{
    index = pos - 1;
    for (int i=n-1; i>=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index]=element;
    return (n+1);
}