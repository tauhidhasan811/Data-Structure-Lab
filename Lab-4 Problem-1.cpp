#include<iostream>
using namespace std;

int Swap(int *x,int *y)
{
    int X=*x;
    *x=*y;
    *y=X;
}

int BubbleShort( int Arr[],int n)
{
    int i,j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (Arr[j] > Arr[j+1])
                {
                    Swap(&Arr[j], &Arr[j+1]);
                }
        }
    }

}
int PrintArr(int Arr[],int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n,i;
    cout<< "Please Enter The Size of The Array : ";
    cin>>n;
   int Arr[n];
    for(i=0;i<n;i++)
    {
        cout<< "Enter The Arr["<<i<< "] index value : ";
        cin>> Arr[i];
    }
    cout<<endl;
    cout<< "The Array is : ";
    for(i=0;i<n;i++)
    {
        cout<<Arr[i]<< " ";
    }
    BubbleShort(Arr,n);
    cout<< "\n\nThe Array is : ";
    PrintArr(Arr,n);
}
