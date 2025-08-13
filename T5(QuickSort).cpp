//Quick sort.......
#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[], int st, int ed);

void QuickSort(int arr[], int st, int ed)
{
    int pivot;
    if(st<ed)
    {
        pivot = Partition(arr, st, ed);
        QuickSort(arr, st, pivot-1);
        QuickSort(arr, pivot+1, ed);
    }
}

int Partition(int arr[], int st, int ed)
{
    int index= st-1, j, pivot = arr[ed];
    for(j=st; j<ed; j++)
    {
        if(pivot>arr[j])
        {
            index++;
            swap(arr[index], arr[j]);
        }
    }
    index++;
    swap(arr[index], arr[ed]);
    return index;
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
    QuickSort(arr, 0, n-1);
    cout<<"Sorted Array: ";
     for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
