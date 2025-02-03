#include <iostream>
using namespace std;
struct Employee{
    int id;
    string name;
    string gender;
    double salary;
}emp;// object global 
int main() {
    // create object local
    struct Employee emp;
    cout<<"Enter ID employee : ";cin>>emp.id;
    cout<<"Name employee : ";cin>>emp.name;
    cout<<"Gender employee : ";cin>>emp.gender;
    cout<<"Salary employee : ";cin>>emp.salary;
    return 0;
}