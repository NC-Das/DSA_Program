//Balance Parentheses.........
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

class solution
{

    vector<char>v;
public:

    bool isvalid(string s)
    {
        int n=s.length(), i=0;
        for(i=0; i<n; i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                v.push_back(s[i]);
            else
            {
                if(v.size()==0)
                    return false;
                else
                {
                    char top= v[v.size()-1];
                    if((top=='(' && s[i]==')') ||
                       (top=='{' && s[i]=='}') ||
                       (top=='[' && s[i]==']'))
                        v.pop_back();
                    else
                        return false;
                }
            }
        }
        if(v.size()==0)
            return true;
        else
            return false;
    }
};

int main()
{
    solution st;
    string str;
    ifstream file("brack.txt");
    while(file>>str)
    {
        if(st.isvalid(str))
            cout<<str<<" ->valid"<<endl;
        else
            cout<<str<<" ->Not Valid"<<endl;
    }
    return 0;
}
