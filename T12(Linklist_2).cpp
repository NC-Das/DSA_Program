//LinkList Reverse........
#include<iostream>
#include<algorithm>
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
        if(head==NULL)
        {
            head= tail = newNode;
        }
        else
        {
            newNode -> next = head;
            head = newNode;
        }
    }

    void Push_back(int val)
    {
        Node* newNode = new Node(val);
        if(head == NULL)
            head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void Pop_front()
    {
        if(head == NULL)
        {
            cout<<"List is empty"<<endl;
        }
        else
        {
            Node* temp = head;
            head=head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void Pop_back()
    {
        if(head==NULL)
            cout<<"Empty list"<<endl;
        else
        {
            Node* temp =head;
            while(temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
        }
    }

    void insertmiddle(int val, int pos)
    {
        if(pos<0)
        {
            cout<<"Invalid Posititon"<<endl;
            return;
        }

        if(pos==0)
        {
            Push_front(val);
            return;
        }
        Node* temp = head;
        for(int i=0; i<pos-1; i++)
        {
            if(temp->next == NULL)
            {
                cout<<"Invalid position"<<endl;
                return;
            }
            temp= temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

    }

    void reverseList()
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;

        while(curr != NULL)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        tail = head;
        head = prev;
    }

    void printll()
    {
        Node* temp  = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

//class reverselist
//{
//public:
//    Node* prev ;
//    Node* curr ;
//    Node* link ;
//
//    reverselist(Node* head)
//    {
//        Node* prev = NULL;
//        Node* curr = head;
//        Node* link = NULL;
//    }
//
//    while(curr != NULL)
//    {
//        link = curr->next;
//        curr->next = prev;
//
//        prev = curr;
//        curr = link;
//
//    }
//    head = prev;
//};

int main()
{
    List ll;

    ll.Push_front(1);
    ll.Push_front(2);
    ll.Push_front(3);
    ll.Push_front(4);

    ll.Push_back(5);

    ll.insertmiddle(7, 0);

    //ll.Pop_front();
    //ll.Pop_back();
    cout<<"Original List: ";
    ll.printll();

    ll.reverseList();
    cout<<endl<<"Reverse list: ";
    ll.printll();
    return 0;
}
