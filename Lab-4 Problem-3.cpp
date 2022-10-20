#include <iostream>
using namespace std;


int BinarySearch(int arr[], int first, int last, int element)
{
	while (first <= last)
    {
		int middle = (first + last) / 2;

		if (arr[middle] == element)
        {
            return middle;
        }

		else if (arr[middle] < element)
        {
            first = middle + 1;
        }

		else
        {
            last = middle - 1;
        }
	}

	return -1;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(void)
{

    int n, element, i;

    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    /*cout << "Please enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout<< "Please enter the elements of an array: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }*/


    cout<<"\nThe Array is : ";
    printArray(arr, 10);

    cout << "\nPlease enter the element which you want to search: ";
    cin >> element;

    int result = BinarySearch(arr, 0, 9, element);

	if(result == -1)
    {
        cout << "\nElement is not present in array." << endl;
    }
    else
    {
        cout << "\nElement is present at index  : " << result << endl;
    }

	return 0;
}
