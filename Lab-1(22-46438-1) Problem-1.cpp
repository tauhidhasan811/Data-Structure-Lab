#include<iostream>
using namespace std;


int Array(int x)
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int Array1[size];

    cout<<"\nPlease enter the element of the array: ";
    for(int i=0; i<size; i++)
    {
        cin >> Array1[i];
    }

    cout << "\nIn order The Array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << Array1[i] <<" ";
    }

    cout << "\n\n Array in reverse order is: ";
    for (int i = size-1; i >= 0; i--)
    {
        cout << Array1[i] <<" ";
    }
    cout<<endl<<endl;

}
int main()
{
    Array(10);
}


