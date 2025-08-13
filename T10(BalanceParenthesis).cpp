//Valid Parentheses........
#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string str)
{
    stack<char>st;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='(' || str[i] == '{' || str[i]=='[')
        {
            st.push(str[i]);
        }
        else
        {
            if(st.size()==0)
                return false;
            else
            {
                if((st.top()=='(' && str[i]==')') ||
                        (st.top()=='{' && str[i] == '}')||
                        (st.top()=='[' && str[i] == ']'))
                {
                    st.pop();
                }

                else
                    return false;

            }
        }
    }
    if(st.size()!=0)
        return false;
    else
        return true;

}

int main()
{
    string ex = "[{()}]";  // test case: "[{()}]", "[()()]{}", "(]", "([{]})"
    if(isvalid(ex))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
