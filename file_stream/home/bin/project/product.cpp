#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <ctime>
#include <vector>
#define BROWN "\033[1;33m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
using namespace std;
// -------------------REGISTER--------------------
char username[100], email[100], password[100], confirm[100];
fstream storage;
bool signin = false;

void SignUp() {
    storage.open("storage_us.txt", ios::app);
    if (!storage.is_open()) {
        cout << "Error opening file. Can't open file." << endl;
        return;
    }

    cout <<RED<< "================================================" << endl;
    cout <<BLUE<< "Enter your username   : "; cin >> username;
    cout <<BLUE<< "Enter your email      : "; cin >> email;
    cout <<BLUE<< "Enter your password   : "; cin >> password;
    cout <<BLUE<< "Confirm your password : "; cin >> confirm;
    cout <<RED<< "================================================" << endl;

    // Check if passwords match
    if (strcmp(password, confirm) != 0) {
        cout <<RED<< "Passwords do not match!" << endl;
        storage.close();
        return;
    }

    // Write to file
    storage << username << " " << email << " " << password << endl;
    storage.close();
    cout <<GREEN<< "Sign Up Successfully!" << endl;
}

void SignIn() {
    storage.open("storage_us.txt", ios::in);
    if (!storage.is_open()) {
        cout <<RED<< "Error opening file. Can't open file." << endl;
        return;
    }

    char stored_username[100], stored_email[100], stored_password[100];
    char new_email[100], new_password[100];

    cout <<MAGENTA<< "================================================" << endl;
    cout <<BLUE<< "Enter your email      : "; cin >> new_email;
    cout <<BLUE<< "Enter your password   : "; cin >> new_password;
    cout <<MAGENTA<< "================================================" << endl;

    // Read from file
    while (storage >> stored_username >> stored_email >> stored_password) {
        if (strcmp(stored_email, new_email) == 0 && strcmp(stored_password, new_password) == 0) {
            signin = true;
            strcpy(username, stored_username); // Store the username
            break;
        }
    }

    storage.close();

    if (signin) {
        cout <<GREEN<< "Sign In Successfully! Welcome, Mr. " << username << endl;
    } else {
        cout <<RED<< "Invalid password or email!" << endl;
    }
}
// -------------------REGISTER--------------------
class Product
{
    private:
        int id;
        string name;
        double price;
        int quantity;
        string size;
        string color;
        string brand;
        string category;
    public:
        void Input()
        {
            cout<<RED<<"===================================="<<endl;
            cout<<BLUE<< "Enter ID          : "<<YELLOW; cin >> id;
            cout<<BLUE<< "Enter Name        : "<<YELLOW; cin >> name;
            cout<<BLUE<< "Enter Price       : "<<YELLOW; cin >> price;
            cout<<BLUE<< "Enter Quantity    : "<<YELLOW; cin >> quantity;
            cout<<BLUE<< "Enter Size        : "<<YELLOW; cin >> size;
            cout<<BLUE<< "Enter Category    : "<<YELLOW; cin >> category;
        }
        void Output()
        {
            cout<<MAGENTA<<setw(12)<<id<<
            setw(12)<<name<<
            setw(12)<<price<<
            setw(12)<<quantity<<
            setw(12)<<size<<
            setw(12)<<category;
        }

};
class DateTime:public Product{
    protected:
        int day,month,year;
        time_t t = time(0);  // Get current system time
        tm* now = localtime(&t);
    public:
    void Input()
    {
        Product::Input();
    }
    void ShowDate()
    {
        cout <<"\t"<< setw(2) << setfill('0') << (now->tm_mon + 1) << "/"<< 
        setw(2) << setfill('0') << now->tm_mday << "/"<< (now->tm_year + 1900);
    }
    void ShowTime()
    {
        Product::Output();
        ShowDate();
        cout <<"\t"<<setw(2) <<setfill('0') << now->tm_hour << ":"
              <<setw(2) <<setfill('0') << now->tm_min << ":"
              <<setw(2) <<setfill('0') << now->tm_sec;
    }
};
int main()
{
    int op,i,n;
    DateTime product;
    fstream store_product;
    do{
        cout<<RED<<"===========[ FORM REGISTER ]==========="<<endl;
        cout<<CYAN<<"[ 1 - S I G N I N ]"<<endl;
        cout<<CYAN<<"[ 2 - S I G N U P ]"<<endl;
        cout<<BLUE<<"Please select one option : "<<YELLOW;cin>>op;
        switch(op)
        {
            case 1:{
                SignIn();
                if(signin)
                {
                    int op;
                    do{
                        cout<<RED<<"===========[ FORM REGISTER ]==========="<<endl;
                        cout<<CYAN<<"[ 1 - WRITE FILE  ]"<<endl;
                        cout<<CYAN<<"[ 2 - READ FILE   ]"<<endl;
                        cout<<CYAN<<"[ 3 - SEARCH FILE ]"<<endl;
                        cout<<CYAN<<"[ 4 - UPDATE FILE ]"<<endl;
                        cout<<CYAN<<"[ 5 - DELETE FILE ]"<<endl;
                        cout<<CYAN<<"[ 6 - INSERT FILE ]"<<endl;
                        cout<<BLUE<<"Please select one option : "<<YELLOW;cin>>op;
                        switch (op)
                        {
                            case 1:
                            {
                                
                            }
                        }

                    }while (op!=0);
                    
                }
            }break;
            case 2:{
                SignUp();
            }break;
        }
    } while (op!=0);
    
    return 0;
}