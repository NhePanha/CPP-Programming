#include <iostream>
using namespace std;
struct Person{
    int id;
    string name;
    struct Employee{
        double salary;
        struct Staff{
            string position;
        }sta;
    }emp;
}per;
int main() {
    cout<<"Enter ID : ";cin>>per.id;
    cout<<"Enter Name : ";cin>>per.name;
    cout<<"Enter Salary : ";cin>>per.emp.salary;
    cout<<"Enter Positions : ";cin>>per.emp.sta.position;
    return 0;
}