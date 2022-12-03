#include<iostream>
using namespace std;

int front=-1,rear=-1,queue[10],size=10;

class circularQueue
{
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;
        }
        return false;
    }
    bool isFull()
    {
        if(front==(rear+1)%size)
        {
            return true;
        }
        return false;
    }
public :

    int enQueue(int x)
    {
        if(isFull())
        {
            cout<<"Queue is Already Full.\n";
        }
        else if(isEmpty())
        {
            front=rear=0;
            queue[rear]=x;
            cout<<queue[rear]<<" is Inserted at "<<rear<<endl;
        }
        else
        {
            rear=(rear+1)%size;
            queue[rear]=x;
            cout<<queue[rear]<<" is inserted at "<<rear<<endl;
        }
    }
    int deQueue()
    {
        if(isEmpty())
        {
            cout<<"Queue is Already Empty.\n";
        }
        else if(front==rear)
        {
            front=rear=-1;
            cout<<"Queue is Empty.\n";
        }
        else
        {
            front=(front+1)%size;
            cout<<"DeQueue is Done.\n";
        }
    }
    void showQueue()
    {
        if(isEmpty())
        {
            //cout<<"Queue is Empty.\n";
        }
        else if(front<=rear)
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<queue[i]<<" ";
            }
        }
        else
        {
            for(int i=front;i<size;i++)
            {
                cout<<queue[i]<<" ";
            }
            for(int i=0;i<=rear;i++)
            {
                cout<<queue[i]<<" ";
            }
        }
        cout<<endl<<endl;
    }
};

int main()
{
    circularQueue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.enQueue(8);

    q.showQueue();

    q.deQueue();
    q.deQueue();
    q.deQueue();

    q.showQueue();
    q.enQueue(9);
    q.enQueue(10);
    q.enQueue(11);
    q.enQueue(12);
    q.enQueue(13);
    q.enQueue(14);

    q.showQueue();

    q.deQueue();
    q.deQueue();
    /*q.deQueue();
    q.deQueue();
    q.deQueue();
    /*q.deQueue();
    q.deQueue();
    q.deQueue();
    q.deQueue();*/
    q.enQueue(3);
    q.showQueue();
    cout<<front<< " "<<rear;
}
