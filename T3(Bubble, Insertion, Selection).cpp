//Sorting Algorithm...........
#include<bits/stdc++.h>
using namespace std;
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

    // Bubble sort........
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Bubble sort:    ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Insertion Sort...........
    int arr1[]= {21, 45, 11, 24, 7, 32, 2, 15, 4};
    n= sizeof(arr1)/ sizeof(arr1[0]);
    for(i=1; i<n; i++)
    {
        j= i-1;
        temp = arr1[i];
        while(j>=0 && arr1[j]>temp)
        {
            arr1[j+1]= arr1[j];
            j--;
        }
        arr1[j+1]=temp;
    }
    cout<<"Insertion sort: ";
    for(i=0; i<n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    //Selection Sort.........
    int arr2[]= {21, 45, 11, 24, 7, 32, 2, 15, 4};
    int ind_min;
    n= sizeof(arr2)/ sizeof(arr2[0]);
    for(i=0; i<n-1; i++)
    {
        ind_min = i;
        for(j = i+1; j<n ; j++)
        {
            if(arr2[j]<arr2[ind_min])
            {
                ind_min = j;
            }
        }
        if(ind_min != i)
        {
            temp = arr2[i];
            arr2[i]= arr2[ind_min];
            arr2[ind_min]=temp;
        }
    }

    cout<<"Selection sort: ";
    for(i=0; i<n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
