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
    vector<Person> persons;
    vector<Student> students;
    vector<Employee> employees;
    int n;
    cout<<"Enter Number of Persons : ";cin>>n;
    for(int i=0;i<n;i++){
        int choice;
        cout<<"Enter 1 for Employee, 2 for Student : ";cin>>choice;
        if(choice == 1){
            Employee emp;
            emp.Input();
            employees.push_back(emp);
        }
        else if(choice == 2){
            Student stu;
            stu.Input();
            students.push_back(stu);
        }
        else{
            Person per;
            per.Input();
            persons.push_back(per);
        }
    }
    cout<<"\nPersons : \n";
    for(auto &person : persons)
        person.Output();
    cout<<"\nEmployees : \n";
    for(auto &employee : employees){
        employee.Output();
    }
    cout<<"\nStudents : \n";
    for(auto &student : students){
        student.Output();
    }

    return 0;
}
