//permutation.........
#include<iostream>
#include<vector>
using namespace std;

void permut(vector<int>&arr, int l, int r)
{
    if(l==r)
    {
        for(int val : arr)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }
    for(int i=l; i<=r; i++)
    {
        swap(arr[l], arr[i]);
        permut(arr, l+1, r); //recursive......
        swap(arr[l], arr[i]); //backtracking.....
    }
}

int main()
{
    vector<int> arr = {1,2,3};
    permut(arr, 0, arr.size()-1);
    return 0;
}
