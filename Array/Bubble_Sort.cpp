#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(vector<int>&vec, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minv = vec[i], idx = i;
        for(int j=i;j<n;j++)
        {
            if(vec[j]<minv)
            {
                minv = vec[j];
                idx = j;
            }
        }

        swap(vec[i],vec[idx]);
    }
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        int t;
        cin >> t;
        vec.push_back(t);
    }

    Bubble_Sort(vec, n);

    for(auto it: vec)
    {
        cout << it << " ";
    }
    return 0;
}