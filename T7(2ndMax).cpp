//Find out Maximum, Minimum, 2nd Max, 2nd Min without Sorting..........
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int arr[]={5, 8, 2, 9, 11, 3, 14, 7};
    int n, i, j;
    n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Array: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int mx, mn, nmx=0, nmn=1000000;
    mx= arr[0], mn = arr[0];

    //Find maximum and minimum number..........
    for(i=1; i<n; i++)
    {
        if(mx<arr[i])
            mx = arr[i];
        if(mn>arr[i])
            mn = arr[i];
    }
    cout<<"Maximum Number: "<<mx<<endl;
    cout<<"Mimimum Number: "<<mn<<endl;

    //2nd Maximum and minimum number...........
    int temp=0;
    mx= arr[0], mn=arr[0];
    for(i=1; i<n; i++)
    {
        if(nmx < arr[i])
            nmx= arr[i];
        if(mx<nmx)
            swap(mx,nmx);
        if(nmn>arr[i])
            nmn = arr[i];
        if(mn>nmn)
            swap(mn, nmn);
    }
    cout<<"2nd Maximum Number: "<<nmx<<endl;
    cout<<"2nd Mimimum Number: "<<nmn<<endl;

    return 0;
}
