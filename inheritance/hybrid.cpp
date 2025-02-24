#include <iostream>
#include <iomanip>
using namespace std;
class Person{
    protected:
        int id;
        string name;
    public:
        void Input()
        {
            cout<<"Enter ID : ";cin>>id;
            cout<<"Enter Name : ";cin>>name;
        }
        void Output(){
            cout<<setw(12)<<id<<setw(12)<<name;
        }
};
class Date:public Person{
    protected:
        string date;
    public:
        void Input()
        {
            Person::Input();
            cout<<"Enter Date : ";cin>>date;
        }
        void Output()
        {
            Person::Output();
            cout<<setw(12)<<date;
        }
};
class Employee:public Date{
    private:
        int salary;
    public:
        void Input(){
            Date::Input();
            cout<<"Enter Salary : ";cin>>salary;
        }
        void Output(){
            Date::Output();
            cout<<setw(12)<<salary<<endl;
        }
};
class Student:public Date{
    private:
        double score;
    public: 
        void Input()
        {
            Date::Input();
            cout<<"Enter Score : ";cin>>score;
        }
        void Output()
        {
            Date::Output();
            cout<<setw(12)<<score<<endl;  // student output date and score
        }
};
int main(){
    Employee employee;
    Student student;

    employee.Input();
    employee.Output();

    student.Input();
    student.Output();

    return 0;
}
