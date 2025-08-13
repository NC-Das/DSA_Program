// Maximum, Minimum, Kth value find in Array...........
#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int st, int mid, int ed)
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
        else{
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

    for(int index = 0; index<temp.size(); index++)
    {
        arr[index+st]= temp[index];
    }
}

void MergeSort(int arr[], int st, int ed)
{
    if(st<ed)
    {
        int mid = (st+ed)/2;
        MergeSort(arr, st, mid);
        MergeSort(arr, mid+1, ed);
        Merge(arr, st, mid, ed);
    }
}

int main()

{
    int arr[]={5, 8, 2, 9, 11, 3, 14, 7};
    int n, i, j;
    n= sizeof(arr)/sizeof(arr[0]);
    cout<<"   Array:     ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MergeSort(arr, 0, n-1);
    cout<<"Sorted Array: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //max, min , kth element.........

    cout<<"Minimum value: "<<arr[0]<<endl;
    cout<<"Maximum value: "<<arr[n-1]<<endl;

    int kth;
    cout<<"Enter the Kth Postiton: ";
    cin>>kth;

    cout<<"Kth Element: "<<arr[kth-1]<<endl;

    return 0;
}
