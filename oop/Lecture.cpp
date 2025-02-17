#include <iostream>
#include <iomanip>
#include <stdbool.h>
#include <string>
int i;
using namespace std;
// create class Lecture
class Lecture{
    private:
        // block data members
        int code;
        string name;
        string gender;
        string subject;
    public:
        // methods
        // default constructor
        Lecture(){
            code = 0;
            name = "null";
            gender = "null";
            subject = "null";
        }
        Lecture(int code, string name, string gender, string subject){
            this->code = code;
            this->name = name;
            this->gender = gender;
            this->subject = subject;
        }
        // property set
        void setCode(int code){
            this->code = code;
        }
        void setName(string name){
            this->name = name;
        }
        void setGender(string gender){
            this->gender = gender;
        }
        void setSubject(string subject){
            this->subject = subject;
        }
        // property get
        int getCode(){
            return code;
        }
        string getName(){
            return name;
        }
        string getGender(){
            return gender;
        }
        string getSubject(){
            return subject;
        }
        // function
        void AddLecture();
        void DisplayLecture();
};
void Lecture::AddLecture(){
    cout<<"Enter Lecture Code    : ";cin>>code;
    cout<<"Enter Lecture Name    : ";cin>>name;
    cout<<"Enter Lecture Gender  : ";cin>>gender;
    cout<<"Enter Lecture Subject : ";cin>>subject;
}
void Header()
{
    cout<<setw(12)<<"CODE"<<
    setw(12)<<"NAME"<<
    setw(12)<<"GENDER"<<
    setw(12)<<"SUBJECT"<<endl;
}
void Lecture::DisplayLecture(){
    cout<<setw(12)<<code<<
    setw(12)<<name<<
    setw(12)<<gender<<
    setw(12)<<subject<<endl;
}
void Search(Lecture lec[],int n)
{
    int code;
    bool check = false;
    cout<<"Enter Lecture Code To Search : ";cin>>code;
    for(i=0;i<n;i++){
        if(lec[i].getCode()==code){
            lec[i].DisplayLecture();
            check = true;
        }
    }
    if(!check)
    {
        cout<<"Search Lecture Not Found....\n";
    }
    else{
        cout<<"Search Lecture Found....\n";
    }
}
void Update(Lecture lec[],int n)
{
    int code,op;
    bool check = false;
    cout<<"Enter Lecture Code To Update : ";cin>>code;
    for(i=0;i<n;i++){
        if(lec[i].getCode()==code){
            lec[i].DisplayLecture();
            check = true;
            cout<<"==========[ UPDATE ]=================="<<endl;
            cout<<"[ 1 - Update Name ]"<<endl;
            cout<<"[ 2 - Update Gender  ]"<<endl;
            cout<<"[ 3 - Update Subject ]"<<endl;
            cout<<"Enter Your Choice : ";cin>>op;
            switch(op){
                case 1:{
                    string name;
                    cout<<"Enter New Name : ";cin>>name;
                    lec[i].setName(name);
                }break;
                case 2:{
                    string gender;
                    cout<<"Enter New Gender : ";cin>>gender;
                    lec[i].setGender(gender);
                }break;
                case 3:{
                    string subject;
                    cout<<"Enter New Subject : ";cin>>subject;
                    lec[i].setSubject(subject);
                }break;
            }
        }
    }
    if(!check)
    {
        cout<<"Update Lecture Not Success....\n";
    }
    else{
        cout<<"Update Lecture Success....\n";
    }
}
// pass by reference
void DeleteLecture(Lecture lec[], int *n) {
    int deletecode;
    bool check = false;
    cout << "Enter Lecture Code To Delete: ";cin >> deletecode;
    for (int i = 0; i < *n; i++) {
        if (lec[i].getCode() == deletecode) {
            for (int j = i; j < *n - 1; j++) {
                lec[j] = lec[j + 1];  // Shift elements left
            }
            (*n)--;  // Decrease the number of elements
            check = true;
            cout << "Delete Lecture Success.\n";
            return;  // Exit the function after deletion
        }
    }
    if (!check) {
        cout << "Delete Lecture Not Success.\n";
    }
}
// pass by reference
void InsertLecture(Lecture lec[], int *n) {
    int insertcode;
    cout << "Enter Lecture Code To Insert After: ";cin >> insertcode;
    for (int i = 0; i < *n; i++) {
        if (lec[i].getCode() == insertcode) {
            for (int j = *n; j > i; j--) {
                lec[j] = lec[j - 1];  // Shift elements right
            }
            lec[i].AddLecture();  // Add new lecture
            (*n)++; // Increase the number of elements
            cout << "Insert Lecture Success.\n";
            return;  // Exit the function after insertion
        }
    }
    cout << "Insert Lecture Not Success.\n";
}
// pass by reference
void SortLecture(Lecture lec[], int *n) {
    for (int i = 0; i < *n - 1; i++) {
        for (int j = 0; j < *n - i - 1; j++) {
            if (lec[j].getCode() > lec[j + 1].getCode()) {
                swap(lec[j], lec[j + 1]);  // Swap elements if current element is greater than the next element
            }
        }
    }
    cout << "Sort Lecture Success.\n";
}
// pass by reference
void Add(Lecture lec[], int *n){
    int add = 0;
    bool check = false;
    cout<<"Enter Number Of Lecture To Add : ";cin>>add;
    for(i=*n;i<*n+add;i++)
    {
        lec[i].AddLecture();
        check = true;
    }
    *n+=add;
    if(check){
        cout<<"Add Lecture Success....\n";
    }
    else{
        cout<<"Add Lecture Not Success....\n";
    }
}
void Menu()
{
    cout<<"==================[M E N U]======================"<<endl;
    cout<<"[ 1 - Add Lecture         ]"<<endl;
    cout<<"[ 2 - Display Lecture     ]"<<endl;
    cout<<"[ 3 - Search Lecture      ]"<<endl;
    cout<<"[ 4 - Update Lecture      ]"<<endl;
    cout<<"[ 5 - Delete Lecture      ]"<<endl;// pass by reference
    cout<<"[ 6 - Insert Lecture      ]"<<endl;// pass by reference
    cout<<"[ 7 - Sort lecture        ]"<<endl;// pass by reference
    cout<<"[ 8 - Add lecture         ]"<<endl;// pass by reference
    cout<<"[ 9 - Find Male or Female ]"<<endl;
}
int main()
{
    int op,n;
    // create object the lecture
    Lecture lec[100];
    do{
        Menu();
        cout<<"Please select one option : ";cin>>op;
        switch(op){
            case 1:{
                cout<<"Enter Number Of Lecture : ";cin>>n;
                for(i=0;i<n;i++){
                    cout<<"========#00"<<i+1<<"==========="<<endl;
                    lec[i].AddLecture();
                }
            }break;
            case 2:{
                Header();
                for(i=0;i<n;i++){
                    lec[i].DisplayLecture();
                }
            }break;
            case 3:{
                Search(lec,n);
            }break;
            case 4:{
                Update(lec,n);
            }break;
            case 5:{
                DeleteLecture(lec,&n);
            }break;
            case 6:{
                InsertLecture(lec,&n);
            }break;
            case 7:{
                SortLecture(lec,&n);
            }break;
            case 8:{
                Add(lec,&n);
            }break;
        }
    }while(op!=0);
    return 0;
}