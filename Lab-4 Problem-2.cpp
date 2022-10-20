#include <iostream>
using namespace std;

int search(int Arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (Arr[i] == x)
            {
                return i;
            }
    }
    return -1;
}

int main(void)
{
    int n, element, i;
    cout << "Please Enter the size of an Array : ";
    cin >> n;
    int Arr[n];
    cout<< "Please Enter the elements of an Array : ";
    for (i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    cout << "\nPlease Enter the element which you want to search : ";
    cin >> element;
    int result = search(Arr, n, element);

    if(result == -1)
    {
       cout<<"\n\nElement is not present in Array.";
    }
    else
    {
       cout<<"\n\nElement is present at index : " <<result;
    }
    cout<<endl;
    return 0;
}

