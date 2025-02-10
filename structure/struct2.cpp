#include <iostream>
using namespace std;
struct Employee{
    int id;
    string name;
    string gender;
    double salary;
}emp;// object global 
void Input()
{
    cout<<"ID : ";cin>>emp.id;
    cout<<"Name : ";cin>>emp.name;
    cout<<"Gender : ";cin>>emp.gender;
    cout<<"Salary : ";cin>>emp.salary;
}
void Output(){
    cout<<"ID : "<<emp.id<<endl;
    cout<<"Name : "<<emp.name<<"\n";
    cout<<"Gender : "<<emp.gender<<endl;
    cout<<"Salary : "<<emp.salary<<endl;
}
int main() {
    // create object local
    //struct Employee temp;
    Input();
    Output();
    return 0;
}