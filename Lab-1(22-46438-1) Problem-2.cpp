#include<iostream>
using namespace std;

int Array()
{
    int i,size;

    cout<<"Enter size of the array : ";
    cin>>size;

    int arr[size];
    cout<<"\nEnter elements of the array\n\n";
    for(i=0; i<size; i++)
    {
        cout<<"Enter the element arr["<<i<<"] :";
        cin>>arr[i];
    }
    for(i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<"Even numbers of the array : "<<arr[i]<<endl;
        }
        else
        {
            cout<<"odd numbers of the array : "<< arr[i]<<endl;
        }
    }
}
int main()
{
    Array();
}
