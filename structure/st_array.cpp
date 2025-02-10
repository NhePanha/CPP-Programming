#include <iostream>

using namespace std;
struct Person{
    string id;
    string name;
    string gender;
    double salary;
    int age;
};
int main()
{
    // create object array 
    struct Person per[100];
    int n;
    cout<<"Enter the number of persons : ";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter ID : ";cin>>per[i].id;
        cout<<"Enter Name : ";cin>>per[i].name;
        cout<<"Enter Gender : ";cin>>per[i].gender;
        cout<<"Enter Salary : ";cin>>per[i].salary;
        cout<<"Enter Age : ";cin>>per[i].age;
    }
    cout<<"\nID\tName\tGender\tSalary\tAge"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<per[i].id<<"\t"<<per[i].name<<"\t"<<per[i].gender<<"\t"<<per[i].salary<<"\t"<<per[i].age<<endl;
    }
    return 0;
}