#include <iostream>
using namespace std;
class Library{
    protected:
        int room;
        string address;
};
class Book: public Library{
    protected:
        int id;
        string title;
        int author;
};
class Student: public Book{
    private:
        int code;
        string name;
        int age;
    public:
        void Input()
        {
            // code for input
            cout<<"Enter Library ID : ";cin>>id;
            cout<<"Enter Address : ";cin>>address;
            cout<<"Enter Room : ";cin>>room;
            cout<<"Enter Book ID : ";cin>>id;
            cout<<"Enter Title : ";cin>>title;
            cout<<"Enter Author : ";cin>>author;
            cout<<"Enter Student Code : ";cin>>code;
            cout<<"Enter Student Name : ";cin>>name;
            cout<<"Enter Student Age : ";cin>>age;
        }
        void Output(){
            // code for output
            cout<<"Library ID : "<<id<<endl;
            cout<<"Address : "<<address<<endl;
            cout<<"Room : "<<room<<endl;
            cout<<"Book ID : "<<id<<endl;
            cout<<"Title : "<<title<<endl;
            cout<<"Author : "<<author<<endl;
            cout<<"Student Code : "<<code<<endl;
            cout<<"Student Name : "<<name<<endl;
            cout<<"Student Age : "<<age<<endl;
        }
};
int main()
{
    Student stu;
    stu.Input();
    stu.Output();
    return 0;
}