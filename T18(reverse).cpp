//Reverse a String....
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()

{
    string str = "The pen";
    string str2;
    int i, n=str.length();
    reverse(str.begin(), str.end());

    //cout<<str<<endl;


    for(int i=0; i<n; i++)
    {
        string word="\0";
        while(i<n && str[i]!=' ')
        {
            word += str[i];
            i++;
        }
        //cout<<word<<endl;
        if(word.length()>0)
        {
            reverse(word.begin(), word.end());

            str2 += " "+word;
        }

    }
    cout<<str2.substr(1)<<endl;


    return 0;
}
