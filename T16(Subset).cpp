//Subset...
#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int>&arr, int i, vector<int>&ans)
{
    if(i==arr.size())
    {
        for(int val : ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    subset(arr, i+1, ans);

    ans.pop_back();
    subset(arr, i+1, ans);

}

int main()
{
    vector<int>arr={1,2,3};
    vector<int>ans;
    subset(arr, 0, ans);

    return 0;
}
