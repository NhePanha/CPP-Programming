#include <iostream>
using namespace std;
// create class
class MyClass{
    private:
        int id;
        string name;
        double age;
        string description;
    public:
        void setId(int id){
            this->id=id;
        }
        void setName(string name){
            this->name=name;
        }
        void setAge(double age){
            this->age=age;
        }
        void setDescription(string des){
            this->description=des;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
        double getAge(){
            return age;
        }
        string getDescription(){
            return description;
        }
};
int main()
{
    // create object
    MyClass myclass;
    // properties settings
    myclass.setId(1001);
    myclass.setName("sovan");
    myclass.setAge(18);
    myclass.setDescription("the description");
    // porperties getting
    cout<<"ID = "<<myclass.getId()<<endl;
    cout<<"Name = "<<myclass.getName()<<endl;
    cout<<"Age = "<<myclass.getAge()<<endl;
    cout<<"Des = "<<myclass.getDescription()<<endl;
    return 0;
}