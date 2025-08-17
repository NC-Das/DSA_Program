//String Palindrome.....
#include<iostream>
#include<string>
#include<ctype.h>
#include<fstream>
using namespace std;

bool ispalindrome(string str)
{
    int left=0, right = str.length()-1;
    char ch1, ch2;
    while(left<right)
    {
        ch1=tolower(str[left]);
        ch2=tolower(str[right]);
        if(ch1!=ch2)
            return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    ifstream infi("palindrome.txt");
    string str;
    while(infi>> str)
    {
        if(ispalindrome(str))
            cout<<str<<"-> Palindrome"<<endl;
        else
            cout<<str<<"-> not palindrome"<<endl;
    }
    return 0;
}
