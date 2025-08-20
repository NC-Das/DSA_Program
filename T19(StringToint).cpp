//sing to Integer....
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

class soluation
{
public:
    int stringTOinteger(string s)
    {
        int n= s.length();
        int sign=1, i=0;
        long long int result=0;
        while(i<n && s[i]==' ')
        {
            i++;
        }

        while(i<n && (s[i]=='+' || s[i]=='-'))
        {

        if(s[i]=='-')
            sign=-1;
        i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9')
        {
        result= result*10 + (s[i]-'0');
            i++;
            if(result*sign>INT_MAX)
                return INT_MAX;
            if(result*sign<INT_MIN)
                return INT_MIN;
        }
        return result*sign;
    }
};

int main()
{
    soluation st;
    cout << st.stringTOinteger("  -12 what") << endl;  // -12
    cout << st.stringTOinteger("4193 with words") << endl; // 4193
    cout << st.stringTOinteger("   +42") << endl; // 42
    cout << st.stringTOinteger("1337c0d3") << endl; // 1337
    cout << st.stringTOinteger("2147483648") << endl; // INT_MAX
    cout << st.stringTOinteger("-2147483649") << endl; // INT_MIN
    return 0;
}
