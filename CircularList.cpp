#include<iostream>
using namespace std;

struct Node
{
    int item;
    Node *next;
};
Node *head=nullptr;

int insertAtHead(int x)
{
    Node *new_node=new Node();
    new_node->item=x;
    new_node->next=head;
    head=new_node;
    cout<<endl<<"Head : "<<head<<endl;
    if(new_node->next==nullptr)
    {
        new_node->next=new_node;
    }
    cout<<endl<<new_node->next<<endl;
}
/*int insertAtEnd(int x)
{
    Node *new_node=new Node();
    Node *last_node=head,*prev;
    new_node->item=x;
    new_node->next=head;
    if(head->next==head)
    {
        head->next=new_node;
    }
    else
    {
        while(last_node->next!=head)
        {
            last_node=last_node->next;
        }
        last_node->next=new_node;
    }
}
int insertAt(Node *node,int x)
{
    Node *new_node=new Node();
    new_node->item=x;
    new_node->next=node->next;
    node->next=new_node;
}
int deleteAtHead()
{
    Node *delete_head=head;
    if(head==nullptr)
    {
        cout<<"Link List is Already Null.\n";
    }
    else
    {
        if(delete_head->next==head)
        {
            head=nullptr;
        }
        else
        {
            while(delete_head !=head)
            {
                delete_head->next=head;
            }
            head=head->next;
            delete_head->next=head;
        }
    }
}
int deleteAtLast()
{
    Node *delete_last=head,*prve;
    if(head->next==head)
    {
        free(delete_last);
        head=nullptr;
    }
    else
    {
        while(delete_last->next!=head)
        {
            prve=delete_last;
            delete_last=delete_last->next;
        }
        prve->next=head;
        free(delete_last);
    }
}
int deleteItem(int x)
{
    Node *delete_item=head,*prev;
    if(delete_item->item==x)
    {
        head=delete_item->next;
        free(delete_item);
    }
    else
    {
        delete_item=delete_item->next;
        while(delete_item!=head && delete_item->item !=x )
        {
            prev=delete_item;
            delete_item=delete_item->next;
        }
        if(delete_item==nullptr)
        {

        }
        else
        {
            prev->next=delete_item->next;
        }
    }
}*/

void showList(Node *node)
{
    cout<<"Print the List : ";

    if(node==nullptr)
    {
        cout<<" List is Empty.\n";
    }
    else
    {
        cout<<node->item<< " ";
        /*cout<<node->next->item<< " ";
        cout<<node->next->next->item<< " ";*/
        node=node->next;
        while(node !=head)
        {
            cout<<node->item<<" ";
            node=node->next;
        }
    }
    cout<<endl<<endl;
}
int main()
{
   insertAtHead(3);
   insertAtHead(2);
   insertAtHead(1);
   //showList(head);
   //deleteAtHead();
   //showList(head);
   //deleteAtLast();
  // showList(head);
}
