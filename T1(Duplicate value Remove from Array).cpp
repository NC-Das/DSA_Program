#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]= {1, 2, 2, 3, 5, 6, 9, 5, 7, 2};
    int n, i, j, k;
    n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Size of array is: "<<n<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(i=0; i<n; i++)
    {
        for(k=i+1; k<n; k++)
        {
            if(arr[i]==arr[k])
            {
                for(j=k; j<n; j++)
                {
                    arr[j]=arr[j+1];
                }
                n=n-1;
            }
        }
    }
    cout<<"Size of array is: "<<n<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
