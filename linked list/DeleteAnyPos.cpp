#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=nullptr;

    }

};
Node* todeleteNode(Node* head,int pos)
{
    Node* temp=head;
    if(pos==1)
    {
        head=temp->next;
        delete temp;
        return head;
    }
    Node* prev=nullptr;
    for(int i=1;i<pos;i++){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete temp;
    return head;
}
void printList(Node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"Nullptr"<<endl;
}
int main()
{
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    int pos=5;
    head=todeleteNode(head,5);
    printList(head);
}