#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<ctype.h>
#include<string>
#include<math.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node* head;
    Node* tail;

public:
    List()
    {
        head=tail=NULL;
    }
    void Push_front(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next=head;
            head = newNode;
        }
    }

    void Push_back(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }


    void Reverse()
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* link = NULL;

        while(curr != NULL)
        {
            link = curr->next;
            curr->next = prev;

            prev=curr;
            curr = link;
        }
        tail = head;
        head =prev;
    }

    void printlist()
    {
        Node* temp = head;
        while(temp!= NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};


int main()
{
    List ll;
    ll.Push_front(1);
    ll.Push_front(2);
    ll.Push_front(3);
    ll.Push_front(4);
    ll.Push_front(5);

    ll.Push_back(6);
    ll.Push_back(7);

    //ll.Reverse();

    ll.printlist();

    ll.Reverse();

    ll.printlist();

    return 0;
}
