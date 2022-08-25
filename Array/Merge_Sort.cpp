#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&vec, int s, int m, int e)
{
    vector<int> temp(e-s+1);
    int p1 = s, p2 = m+1, p3 = 0;

    while(p1<=m && p2<=e)
    {
        if(vec[p1] < vec[p2]) // The entire concept of comparator is based on this single condition
        {
            temp[p3++] = vec[p1++];
        }
        else
        {
            temp[p3++] = vec[p2++];
        }
    }

    while(p1 <= m)
    {
        temp[p3++] = vec[p1++];
    }
    while(p2 <= e)
    {
        temp[p3++] = vec[p2++];
    }

    for(int i=0;i<=(e-s);i++)
    {
        vec[s+i] = temp[i];
    }
}

void Merge_sort(vector<int>&vec, int s, int e)
{
    if(s==e)
    return;

    int m = (s+e)/2;

    Merge_sort(vec, s, m);
    Merge_sort(vec, m+1, e);

    Merge(vec, s,m,e);
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

    Merge_sort(vec, 0, n-1);

    for(int i=0;i<n;i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}