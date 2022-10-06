#include<iostream>
using namespace std;
struct Employee
{
    int id;
    int joining_year;
    int salary;
    string department;
};
int main()
{
   struct Employee e[10];
   int i;
   for(i=0;i<9;i++)
   {
       cout<< "Enter the employee Id           : ";
       cin>>e[i].id;
       cout<< "Enter the employee Joining year : ";
       cin>>e[i].joining_year;
       cout<< "Enter the employee Salary       : ";
       cin>>e[i].salary;
       cout<< "Enter the employee Department   : ";
       cin>>e[i].department;
       cout<< endl<<endl;
   }
   cout<< "\n\n Employee Who Join Before 2009 and Salary more then 20k There Details are \n\n";
   for(i=0;i<10;i++)
   {
     if(e[i].joining_year < 2009 && e[i].salary > 20000)
     {
         cout<< "Employee Id           : "<<e[i].id<<endl;
         cout<< "Employee Joining year : "<<e[i].joining_year<<endl;
         cout<< "Employee Salary       : "<<e[i].salary<<endl;
         cout<< "Employee Department   : "<<e[i].department<<endl;
         cout<<endl;
     }
   }
}




