#include <iostream>
#include <iomanip>
using namespace std;
// create class employee
class Employee{
    private:
        // block data members
        int id;
        string name,gender;
        double salary;
    public:
        // block methods
        // default constructor
        Employee()
        {
            id = 0;
            name = "null";
            gender = "null";
            salary = 0;
        }
        // constructor with parameters
        Employee(int id, string name, string gender, double salary)
        {
            this->id = id;
            this->name = name;
            this->gender = gender;
            this->salary = salary;
        }
        // property set
        void setId(int id)
        {
            this->id = id;
        }
        void setName(string name)
        {
            this->name = name;
        }
        void setSalary(double salary)
        {
            this->salary = salary;
        }
        // property get
        int getId(){
            return id;
        }
        string getName(){
            this->name = name;
        }
        double getSalary(){
            return salary;
        }
        // function input
        void Input()
        {
            cout<<"Enter Employee ID : ";cin>>id;
            cout<<"Enter Employee Name : ";cin>>name;
            cout<<"Enter Employee Gender : ";cin>>gender;
            cout<<"Enter Employee Salary : ";cin>>salary;
        }
        // function output
        void Display()
        {
            cout<<setw(12)<<id<<
            setw(12)<<name<<
            setw(12)<<gender<<
            setw(12)<<salary<<endl;
        }
};
void Header()
{
    cout<<setw(12)<<"CODE"<<
    setw(12)<<"NAME"<<
    setw(12)<<"GENDER"<<
    setw(12)<<"SALARY"<<endl;
}
int main()
{
    // create object array
    Employee emp[100];
    int n,i,op;
    do{
        cout<<"===========[ M E N U ]============="<<endl;
        cout<<"[ 1 - Input data  ]"<<endl;
        cout<<"[ 2 - Output data ]"<<endl;
        cout<<"[ 3 - Search data ]"<<endl;
        cout<<"[ 4 - Update data ]"<<endl;
        cout<<"[ 5 - Delete data ]"<<endl;
        cout<<"[ 6 - Insert data ]"<<endl;
        cout<<"[ 7 - Sort data   ]"<<endl;
        cout<<"[ 8 - Add data    ]"<<endl;
        cout<<"[ 9 - Exit        ]"<<endl;
        cout<<"Please select one option : ";cin>>op;
        switch(op){
            case 1:{
                cout<<"Enter Number Of Employee : ";cin>>n;
                for(i=0;i<n;i++){
                    emp[i].Input();
                }
            }break;
            case 2:{
                Header();
                for(i=0;i<n;i++){
                    emp[i].Display();
                }
            }break;
            case 3:{
                bool check = false;
                int searchid;
                cout<<"Enter ID To Search : ";cin>>searchid;
                for(i=0;i<n;i++){
                    if(searchid==emp[i].getId())
                    {
                        emp[i].Display();
                        check = true;
                    }
                }
                if(check==false){
                    cout<<"Search id not found..."<<endl;
                }
                else{
                    cout<<"Search found..."<<endl;
                }
            }break;
        }
    }while(op!=0);
    return 0;
}