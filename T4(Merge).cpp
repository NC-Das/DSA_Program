//merge sort........
#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int st,int mid,int ed)
{
    int i=st, j=mid+1;
    vector<int> temp;
    while(i<=mid && j<=ed)
    {
        if(arr[i]<arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=ed)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(i=0; i<temp.size(); i++)
    {
        arr[st+i] = temp[i];
    }

}

void mergesort(int arr[], int st, int ed)
{
    if(st<ed)
    {
        int mid = (st+ ed)/2;
        mergesort(arr, st, mid);
        mergesort(arr, mid+1, ed);
        Merge(arr, st, mid, ed);
    }
}



int main()
{
    int arr[]= {21, 45, 11, 24, 7, 32, 2, 15, 4};
    int n, i, j, temp;
    n= sizeof(arr)/ sizeof(arr[0]);
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    mergesort(arr, 0, n-1);

    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
