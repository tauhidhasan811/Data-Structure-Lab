#include<iostream>
using namespace std;

struct Node
{
    int item;
    Node * next;
};
Node* head=nullptr;

int insertAtFront(int x)
{
    Node * new_node=new Node();
    new_node->item=x;
    new_node->next=head;
    head=new_node;
}
int insertAtBack(int x)
{
    Node * new_node=new Node;
    Node * last=head;
    new_node->item=x;
    new_node->next=nullptr;

    if(last->next==nullptr)
    {
        head->next=new_node;
    }
    else
    {
        while(last->next!=nullptr)
        {
            last=last->next;
        }
    }
    last->next=new_node;
}

void insertAt(struct Node* prev_node, int data)
{
  if (prev_node == NULL)
  {
    cout << "\nThe given previous node cannot be NULL..";
  }

  else
  {
    struct Node* new_node = new Node();

    new_node->item = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
  }
}
void printLinkList( Node *node)
{
    while(node!=nullptr)
    {
        cout<<node->item<< " ";
        node=node->next;
    }
    cout<<endl<<endl;
}

int serchItem(int x)
{
    Node * serch=head;
    while(serch->next!=nullptr)
    {
        if(serch->item==x)
        {
            cout<<"We Found it.\n";
        }
        serch=serch->next;
    }
}

void removeFront(Node** head)
{

  if (*head == nullptr)
  {
      cout<<"Already Empty.\n";
  }
  else
  {
      struct Node *temp = *head;
      *head = temp->next;
      free(temp);
      return;
  }
}

Node* removeLastNode(struct Node* head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;
        delete (second_last->next);
        second_last->next = NULL;

        return head;
}

void removeFrom(Node **head,int key)
{
    Node *temp = *head, *prev;

  if (temp != NULL && temp->item == key)
  {
    *head = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp->item != key)
  {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL)
  {
      return;
  }

  prev->next = temp->next;
  free(temp);
}


void removeFrom(int key)
{
  struct Node *temp = head, *prev;

  if (temp != NULL && temp->item == key)
  {
    head = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp->item != key)
  {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL)
  {
      return;
  }

  prev->next = temp->next;
  free(temp);
}
int main()
{
    insertAtFront(5);
    insertAtFront(4);
    insertAtFront(3);
    insertAtFront(2);
    insertAtFront(1);

    printLinkList(head);
    insertAtBack(9);
    insertAtBack(10);
    insertAtBack(11);
    printLinkList(head);
    //printLinkList(head);
    insertAt(head->next->next->next->next,6);
    insertAt(head->next->next->next->next->next,7);
    insertAt(head->next->next->next->next->next->next,8);
    printLinkList(head);
    printLinkList(head);
    serchItem(4);
    /*insertAtEnd(9);
    insertAtEnd(10);
    insertAtEnd(11);*/
    printLinkList(head);
}

