#include <iostream>
using namespace std;

int main()
{
    int size, count, i, j;
    cout<<"Enter the size of first array: ";
    cin>>size;

    int Array[size], Rep[size];

    cout<<"\nPlease enter the element of an array: ";
    for(i=0; i<size; i++)
    {
        cin >> Array[i];
        Rep[i] = 0;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(Array[i] == Array[j])
            {
                count++;
                Rep[j] = -1;
            }
        }

        if(Rep[i] == 0)
        {
            Rep[i] = count;
        }
    }

    cout<<"\n\n Repeated of all elements of the array  \n";
    for(i=0; i<size; i++)
    {
        if(Rep[i] != -1)
        {
            cout<< Array[i] <<" occurs = " << Rep[i] << " times."<<endl<<endl;
        }
    }
    return 0;
}
