#include<iostream>
using namespace std;

void decode(string str, int j)
{
    int temp;
    for(int i = j; i < str.size(); i = i+j)
    {
        temp = str[i];
        str[i] = (char)(temp + j);
    }
    cout << "\n\nConverted String: " << str;
    cout << endl << endl;
}
int main()
{
    string str;
    int j;
    cout<< "Enter the string : ";
    getline(cin,str);
    cout<<"How much ASCII value do you want to change : ";
    cin>> j;
    decode(str,j);
}
