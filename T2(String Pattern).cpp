#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="Nayan";
    int len, i, j, k=0, lim=0;
    //cin>>str;
    cout<<str<<endl;
    len = str.length();
    cout<<len<<endl;
    lim= sqrt(len)+1;
    cout<<lim<<endl;
    for(i=0; i<=lim; i++)
    {

        for(j=0; j<=i; j++)
        {
            cout<<str[k];
            k+=1;
        }
        cout<<endl;
    }
    return 0;
}
