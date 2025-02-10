#include <iostream>
using namespace std;
// create class
class Person{
    private:
    // block data members
        int id;
        string name;
        string gender;
        string address;
        double salary;
    public:
    // block methods
        // create defualt constructor
        Person()
        {
            id = 0;
            name = "NULL";
            gender = "NULL";
            address = "NULL";
            salary = 0;
        }
        // create constructor with parameters
        Person(int id, string name, string gender, string address,double salary)
        {
            this->id = id;
            this->name = name;
            this->gender = gender;
            this->address = address;
            this->salary = salary;
        }
        void Display()
        {
            cout<<"Person ID : "<<id<<endl;
            cout<<"Person Name : "<<name<<endl;
            cout<<"Person Gender : "<<gender<<endl;
            cout<<"Person Address : "<<address<<endl;
            cout<<"Person salary : "<<salary<<endl;
        }
};
int main()
{
    // create object
    Person per;
    per.Display();
    Person per1(1001,"John","Male","PP",1200);
    per1.Display();
    return 0;
}