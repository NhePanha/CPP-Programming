#include <iostream>
#include <iomanip>
using namespace std;
class Person{
    protected:
        int id;
        string name, gender;
        int age;
    public:
        Person()
        {
            id = 0;
            name = "NULL";
            gender = "NULL";
            age = 0;
        }
        void Input()
        {
            cout<<"Enter ID    : ";cin>>id;
            cout<<"Enter Name  : ";cin>>name;
            cout<<"Enter Gender: ";cin>>gender;
            cout<<"Enter Age   : ";cin>>age;
        }
        void Output()
        {
            cout<<setw(12)<<id<<
            setw(12)<<name<<
            setw(12)<<gender<<
            setw(12)<<age;
        }
};
class Employee{
    protected:
        double salary,rate,hour;
    public:
        Employee()
        {
            salary = 0.00;
            rate = 0.00;
            hour = 0;
        }
        void Input()
        {
            cout<<"Enter Salary       :";cin>>salary;
            cout<<"Enter Hourly Rate  : ";cin>>rate;
            cout<<"Enter Working Hours: ";cin>>hour;
        }
        void Output()
        {
            cout<<setw(12)<<salary<<
            setw(12)<<rate<<
            setw(12)<<hour;
        }
};
class Date:public Person, public Employee{
    private:
        string day,month,year;
    public:
        Date()
        {
            Person:Person();
            Employee:Employee();
            day = "dd";
            month = "MM";
            year = "YYYY";
        }
        void Input()
        {
            Person::Input();
            Employee::Input();
            cout<<"Enter Date (dd/mm/yyyy): ";cin>>day>>month>>year;
        }
        void Output()
        {
            Person::Output();
            Employee::Output();
            cout<<setw(12)<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
void Header()
{
    cout<<setw(12)<<"ID"<<
    setw(12)<<"Name"<<
    setw(12)<<"Gender"<<
    setw(12)<<"Age"<<
    setw(12)<<"Salary"<<
    setw(12)<<"Hourly Rate"<<
    setw(12)<<"Working Hour"<<
    setw(12)<<"Date"<<endl;
}
int main(){
    Date date;
    date.Input();
    Header();
    date.Output();
    return 0;
}