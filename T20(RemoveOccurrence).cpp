//Remove all Occurrence from string.......
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string RemoveOccurrence(string s, string part)
{
    while(s.length()>0 && s.find(part)<s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main()
{
    string str="madam";
    string p="am";
    cout<<RemoveOccurrence(str,p)<<endl;
    return 0;
}
