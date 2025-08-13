//Stack implementation using Array/Vector..........
#include<bits/stdc++.h>
using namespace std;

class Stack
{
 vector<int>v;
 public:
     void Push(int val)
     {
        v.push_back(val);
     }
     void pop()
     {
         v.pop_back();
     }
     int top()
     {
         return v[v.size()-1];
     }

     bool empty(){

     return v.size()==0;
     }

};
int main()
{
    Stack s;
    s.Push(10);
    s.Push(20);
    s.Push(30);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
