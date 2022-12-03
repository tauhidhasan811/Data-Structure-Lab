#include<iostream>
using namespace std;

struct Node
{
    Node *prev;
    int item;
    Node *next;
};
Node *head=nullptr;

int insertAtBeginning(int x)
{
    Node* new_node=new Node();
    new_node->prev=nullptr;
    new_node->item=x;
    new_node->next=head;
    if(head !=nullptr)
    {
       head->prev=new_node;
    }
    head=new_node;
}

int insertAtEnd(int x)
{
    Node* new_node=new Node();
    Node* last=head;

    new_node->item=x;
    new_node->next=nullptr;

    if(head->next==nullptr)
    {
        new_node->prev=head;
        head->next=new_node;
    }
    else
    {
        while(last->next != nullptr)
        {
            last=last->next;
        }
        new_node->prev=last;
        last->next=new_node;
    }
}

int insertBefore(Node* node,int x)
{
    Node *new_node=new Node();

    Node* prevs=head;

    if(node==nullptr)
    {
        cout<<"Given address can't be null.\n";
    }
    else
    {
        while(prevs->next!=node)
        {
            prevs=prevs->next;
        }
        new_node->item=x;
        new_node->prev=prevs;
        new_node->next=prevs->next;
        prevs->next=new_node;
        new_node->prev=new_node;
    }
}

int insertAfter(Node* node,int x)
{
    Node *new_node=new Node();
    if(node==nullptr)
    {
        cout<<"Given address can't be null.\n";
    }
    else
    {
        new_node->item=x;
        new_node->prev=node;
        new_node->next=node->next;
        node->next=new_node;
        new_node->prev=new_node;
    }
}

void deleteAtHead()
{
    Node* delete_head=head;
    head=delete_head->next;
    head->prev=nullptr;
    free(delete_head);
}
void deleteAtLast()
{
    Node* delete_last=head;
    if(head->next==nullptr)
    {
        free(delete_last);
    }
    else
    {
        while(delete_last->next!=nullptr)
        {
            delete_last=delete_last->next;
        }
        delete_last->prev->next=nullptr;
        free(delete_last);
    }
}
int deleteItem(int x)
{
    Node *delete_item=head,*pres;
    if(delete_item->item==x)
    {
        head=delete_item->next;
        free(delete_item);
    }
    else
    {
        while(delete_item!=nullptr && delete_item->item !=x )
        {
            pres=delete_item;
            delete_item=delete_item->next;
        }
        if(delete_item==nullptr)
        {

        }
        else
        {
            delete_item->next->prev=delete_item->prev;
            pres->next=delete_item->next;
        }
    }
}

void printLinkList(struct Node* node)
{
  while (node->next != NULL)
  {
    cout << node->item << " ";
    node = node->next;
  }
  cout << endl << endl;
}
int main()
{
    insertAtBeginning(5);
    insertAtBeginning(4);
    insertAtBeginning(3);
    insertAtBeginning(2);
    insertAtBeginning(1);
    insertBefore(head->next->next->next->next,6);
    //insertAfter(head->next->next->next->next,6);
    insertBefore(head->next->next->next->next->next,7);
    //insertAfter(head->next->next->next->next->next,7);
    insertBefore(head->next->next->next->next->next->next,8);
    //insertAfter(head->next->next->next->next->next->next,8);
    insertAtEnd(9);
    insertAtEnd(10);
    insertAtEnd(11);
    printLinkList(head);
    deleteAtHead();
    printLinkList(head);
    deleteAtLast();
    printLinkList(head);
    deleteItem(5);
    printLinkList(head);

    cout<< head;
}
