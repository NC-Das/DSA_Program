//String Compression....
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string str="aabbccc";
    int n = str.length();
    int idx=0;

    for(int i=0; i<n; i++)
    {
        char ch = str[i];
        int c=0;
        while(i<n && ch==str[i])
        {
            c++; i++;
        }
        if(c==1)
        {
            str[idx++]=ch;
        }
        else
        {
            str[idx++]=ch;
            string s = to_string(c);
            for(int dig : s)
                str[idx++]=dig;
        }
        i--;
    }
    str.resize(idx);
    cout<<str<<endl;
    return 0;
}
