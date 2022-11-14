#include <iostream>
using namespace std;

int queue[10], front = -1, back = -1, maxSize=10;


class Queue
{
public :
    bool isEmpty()
    {
        if ((front == -1) && (back == -1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (back == maxSize-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
public :
    bool enqueue(int Element)
    {
        if(isFull())
        {
            cout<< "Queue is Full\n";
            return false;
        }
        else if(isEmpty())
        {
            front = back = 0;
            queue[back] = Element;
            cout<< Element <<" is inserted into the Queue successfully.\n";
            return true;
        }
        else
        {
            back++;
            queue[back] = Element;
            cout<< Element <<" is inserted into the Queue successfully.\n";
            return true;
        }
    }
public :
    bool dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is empty! Dequeue not possible\n";
            return false;
        }
        else if (front == back)
        {
            front = back = -1;
            cout << "Dequeue function is performed successfully.\n";
            return true;
        }
         else
         {
              front++;
              cout << "Dequeue function is performed successfully.\n";
              return true;
         }
    }
    int frontElement()
    {
        return queue[front];
    }

    int rearElement()
    {
         return queue[back];
    }
    void showQueue()
    {

        if (isEmpty() )
        {
             cout << "\nThe  Queue is empty\n";
             return;
        }
        else
        {
            cout << "\nQUEUE ELEMENTS: ";
            for(int i = front; i <= back; i++)
            {
               cout << queue[i] << " ";
            }
            cout << endl << endl;
        }
    }

};

int main()
{
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.showQueue();
    cout<<"\nFront Element of the Queue: " << q.frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << q.rearElement() <<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.showQueue();
    cout<<"\nFront Element of the Queue: " << q.frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << q.rearElement() <<endl;


    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.showQueue();
    cout<<"\nFront Element of the Queue: " << q.frontElement() <<endl;
    cout<<"Rear Element of the Queue: " << q.rearElement() <<endl;

    return 0;
}

