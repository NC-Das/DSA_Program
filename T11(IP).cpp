//ip addressing......
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;

class ipclassification
{
    vector<string> v;
public:

    void ipaddress(string str)
    {
        int ck=0;
        //cout<<"....."<<str<<endl;
        for(int i=0; str[i]!='.'; i++)
        {
            if(str[i]>='0' && str[i]<='9')
                ck= ck*10+(str[i]-'0');
        }
        //cout<<"....."<<ck<<endl;
        if(ck>=1 && ck<=127)
            cout<<"Class A"<<endl;
        else if(ck>=128 && ck<=191)
            cout<<"Class B"<<endl;
        else if(ck>=192 && ck<=223)
            cout<<"Class C"<<endl;
        else if(ck>=224 && ck<=239)
            cout<<"Class D (Mulaticast)"<<endl;
        else if(ck>=240 && ck<=255)
            cout<<"Class E (Research)"<<endl;
        else
            cout<<"Not valid ip"<<endl;
    }
};

int main()
{
    ipclassification ip;
    string st;
    ifstream ipfile("ip.txt");
    if(!ipfile)
    {
        cout<<"Error! File not open"<<endl;
    }
    while(ipfile>>st)
    {
        ip.ipaddress(st);
    }
    ipfile.close();
    return 0;
}
