#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
}*first=NULL,*last=NULL;

void enqueue(int x)
{
    struct Node *n=(Node*)malloc(sizeof(Node));
    if(n==NULL)
        cout<<"Queue is Full "<<endl;
    else if(first==NULL)
    {
        n->data=x;
        n->next=NULL;
        first=n;
        last=first;
    }
    else
    {
        n->data=x;
        n->next=NULL;
        last->next=n;
        last=n;
    }
}

int dequeue()
{
    int x=-1;
    if(first==NULL)
    {
        cout<<"The queue is empty, there is nothing to delete "<<endl;
    }
    else
    {
        struct Node *p=new Node;
        p=first;
        first=first->next;
        x=p->data;
        free(p);
    }
    return x;
}

void Display()
{
    struct Node *p=new Node;
    p=first;
    cout<<"The elements in the queue are given by : "<<endl;
    if(first==NULL)
        cout<<"There are no elements in the queue, the queue is empty "<<endl;
    else
    {
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }
}

int main()
{
    return 0;
}
