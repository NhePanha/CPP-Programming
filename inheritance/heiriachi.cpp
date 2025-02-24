#include <iostream>
#include <iomanip>
using namespace std;
class Person{
    protected:
        int id;
        string name;
    public:
        Person()
        {
            id = 0;
            name = "null";
        }
        void Input()
        {
            cout<<"Enter ID : ";cin>>id;
            cout<<"Enter Name : ";cin>>name;
        }
        void Output()
        {
            cout<<setw(12)<<id<<
            setw(12)<<name;
        }
};
class Employee:public Person{
    private:
        double salary;
    public:
        Employee()
        {
            Person:Person();
            salary = 0;
        }
        void Input()
        {
            Person::Input();
            cout<<"Enter salary : ";cin>>salary;
        }
        void Output()
        {
            Person::Output();
            cout<<setw(12)<<salary<<endl;
        }
};
class Student:public Person{
    private:
        double score;
    public:
        Student()
        {
            Person:Person();
            score = 0;
        }
        void Input()
        {
            Person::Input();
            cout<<"Enter Score : ";cin>>score;
        }
        void Output()
        {
            Person::Output();
            cout<<setw(12)<<score<<endl;
        }
};
int main()
{
    Employee employee;
    Student student;

    employee.Input();
    employee.Output();

    student.Input();
    student.Output();

    
    return 0;
}