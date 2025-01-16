// * function
//     + None return function
//         - void namefunction()
//         1 - None Parameter
//             - void namefunction()
//         2 - Has Parameter
//             - void namefunction(int a,int b,string name)
//     + Return Function
//         - int namefunction()
//         - long namefunction()
//         - char namefunction()
//         - char * namefunction()
//         - float namefunction()
//         - double namefunction()
//         1 - None Parameter
//             - int namefunction(null)
//         2 - Has Parameter
//             - int namefunction(int a,int b)
// #include <iostream>
// using namespace std;
// int code;
// string name;
// string gender;
// // None return function none parameter
// void Input()
// {
//     cout<<"Enter Code : ";cin>>code;
//     cout<<"Enter Name : ";cin>>name;
//     cout<<"Enter Gender : ";cin>>gender;
// }
// void Output()
// {
//     out<<"Code : "<<code<<endl;
//     cout<<"Name : "<<name<<endl;
//     cout<<"Gender : "<<gender<<endl;

// }
// int main()
// {
//     Input();
//     Output();
//     return 0;
// }

// * None return function
//     + None return function none parameter
//         syntax:
//             void function_name()
//             {
//                 // function body
//             }
//     - None return function Has parameter
//         syntax:
//             void function_name(parameter1,parameter2,.....)
//             {
//                 // function body
//             }
// * return function
//     + return function none parameter
//         syntax:
//             int function_name()
//             {
//                 // function body
//                 return result;
//             }
//             char * function_name()
//             {
//                 // function body
//                 return "result";
//             }
//             double function_name()
//             {
//                 // function body
//                 return result;
//             }
//     + return function Has parameter
//         syntax:
//             int function_name(int a,int b)
//             {
//                 // function body
//                 return result;
//             }
//             char * function_name(char *str)
//             {
//                 // function body
//                 return "result";
//             }
//             double function_name(double a,double b)
//             {
//                 // function body
//                 return result;
//             }




// #include <iostream>
// using namespace std;
// void Sum()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << "Sum : " << a + b << endl;
// }
// void Sum1()
// {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << "Sum : " << a * b << endl;
// }
// int main()
// {
//     // calling function
//     Sum();
//     Sum1();
//     return 0;
// }
// note None return function has parameters
// #include <iostream>
// using namespace std;
// void Sum(int a,string b,string c,int d)
// {
//     cout<<"Id      : "<<a<<endl;
//     cout<<"Name    : "<<b<<endl;
//     cout<<"Gender  : "<<c<<endl;
//     cout<<"Age     : "<<d<<endl;
// }
// int main()
// {
//     int id;
//     string name,gender;
//     int age;
//     cout<<"Enter Id     : ";cin>>id;
//     cout<<"Enter Name   : ";cin>>name;
//     cout<<"Enter Gender : ";cin>>gender;
//     cout<<"Enter Age    : ";cin>>age;
//     // calling functions
//     Sum(id,name,gender,age);
//     return 0;
// }


// code
// name
// size
// price
// qty 
// total
// dis 
// payment
// charge to reil 
// charge to dollar 
// void input()
// void output()
// void header()
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int code,qty;
// string name,size;
// double price,total,dis,payment,c_reil;
// void Input()
// {
//     cout<<"===============[INPUT]==============="<<endl;
//     cout<<"Enter Code  : ";cin>>code;
//     cout<<"Enter Name  : ";cin>>name;
//     cout<<"Enter Size  : ";cin>>size;
//     cout<<"Enter Qty   : ";cin>>qty;
//     cout<<"Enter Price : ";cin>>price;

//     total = price * qty;
//     dis = (total * 10)/100;
//     payment = total - dis;
// }
// void Display()
// {
//     cout<<setw(12)<<code<<
//     setw(12)<<name<<
//     setw(12)<<size<<
//     setw(12)<<qty<<
//     setw(12)<<price<<
//     setw(12)<<total<<
//     setw(12)<<dis<<
//     setw(12)<<payment<<endl;
// }
// void Header()
// {
//     cout<<setw(12)<<"code"<<
//     setw(12)<<"name"<<
//     setw(12)<<"size"<<
//     setw(12)<<"qty"<<
//     setw(12)<<"price"<<
//     setw(12)<<"total"<<
//     setw(12)<<"dis"<<
//     setw(12)<<"payment"<<endl;
// }
// void MENU()
// {
//     cout<<"=================[MENU]================="<<endl;
//     cout<<"[1 - INPUT      ]"<<endl;
//     cout<<"[2 - OUPTUT     ]"<<endl;
//     cout<<"[3 - PAY KHR    ]"<<endl;
//     cout<<"[4 - PAY DOLLAR ]"<<endl;
//     cout<<"[5 - Exit       ]"<<endl;
// }
// int main()
// {
//     int op;
//     do{
//         MENU();
//         cout<<"Please select one option : ";cin>>op;
//         switch(op)
//         {
//             case 1:{
//                 Input();
//             }break;
//             case 2:
//             {
//                 Header();
//                 Display();
//             }break;
//             case 3:{
//                 c_reil = payment * 4100;
//                 cout<<"Payment KHR : "<<c_reil<<endl;
//             }break;
//             case 4:{
//                 cout<<"Payment : "<<payment<<endl;
//             }break;
//         }
//     }while(op!=0);
//     return 0;
// }
// #include <iostream>
// using namespace std;
// float Sum(float a, float b)
// {
//     return a + b;
// }
// int main()
// {
//     float x,y;
//     cout<<"Enter X and Y : ";cin>>x>>y;
//     float result = Sum(x,y);
//     cout<<"result = "<<result<<endl;
//     return 0;
// }


// #include <iostream>
// #include <iomanip>
// #include <windows.h>
// using namespace std;
// // global variable
// int code;
// string name,size;
// double qty,price;
// void AddProduct()
// {
//     cout<<"================[AddProduct]================"<<endl;
//     cout<<"Enter Code  : ";cin>>code;
//     cout<<"Enter Name  : ";cin.ignore();getline(cin,name);
//     cout<<"Enter Price : ";cin>>price;
//     cout<<"Enter Qty   : ";cin>>qty;
// }
// double Total()
// {
//     return qty * price;
// }
// double Dis()
// {
//     return (Total() >= 1 && Total() <= 20)? (Total() * 10)/100 :
//     (Total() > 20 && Total() <= 50)? (Total() * 20)/100 :(Total() * 30)/100;
// }
// double Tax()
// {
//     return (Total() * 10)/100;
// }
// double Payment()
// {
//     return Total() + Tax() - Dis();
// }
// void Display()
// {
//     cout<<setw(12)<<code<<
//     setw(12)<<name<<
//     setw(12)<<price<<
//     setw(12)<<qty<<
//     setw(12)<<Total()<<
//     setw(12)<<Dis()<<
//     setw(12)<<Tax()<<
//     setw(12)<<Payment()<<endl;
// }
// void Header()
// {
//     cout<<setw(12)<<"code"<<
//     setw(12)<<"name"<<
//     setw(12)<<"price"<<
//     setw(12)<<"qty"<<
//     setw(12)<<"Total"<<
//     setw(12)<<"Dis"<<
//     setw(12)<<"Tax"<<
//     setw(12)<<"Payment"<<endl;
// }
// double KHR()
// {
//     return Payment() * 4100;
// }
// double Dollar()
// {
//     return Payment();
// }
// void Loadings()
// {
//     system("Color a");
//     // char x =219;
//     // char x =178;
//     // char x =175;
//     char x =177;
    
//     cout<<"\n""\t\t\t\t        LOADING.....\t\t\t\t\n";
//     cout<<"\t\t\t"; for(int i=0;i<40;i++)
//     {
//     cout<<x;
//     Sleep(80);
//     }
//     system("cls");
// }
// int main()
// {
//     Loadings();
//     int op;
//     do{
//         cout<<"[ 1 - AddProducts  ]"<<endl;
//         cout<<"[ 2 - Display      ]"<<endl;
//         cout<<"[ 3 - Pay Reil     ]"<<endl;
//         cout<<"[ 4 - Pay Dollar   ]"<<endl;
//         cout<<"Please select one option : ";cin>>op;
//         switch(op)
//         {
//             case 1:{
//                 AddProduct();
//             }break;
//             case 2:{
//                 Header();
//                 Display();
//             }break;
//             case 3:{
//                 cout<<"PAYMENTS = "<<KHR()<<"  KHR"<<endl;
//             }break;
//             case 4:{
//                 cout<<"PAYMENTS = "<<Dollar()<<"  Dollar"<<endl;
//             }break;
//             default: cout<<"Invalid Option"<<endl;
//         }
//     }while(op!=0);
//     return 0;
// }



#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int code[] = {1001, 1002, 1003, 1004, 1005, 1006,1007};
    string name[] = {"Dara", "Lyna", "Yaro", "Sovan", "Bopha", "Lompat", "Reaksa"};
    string gender[] = {"male","female","male","male","female","female","female"};
    double salary[] = {1200.00F,1300.00F,950.50F,350.00F,550.00F,700.00F,850.00F};
    
    for(int i = 0; i < 5; i++)
    {
        cout <<left<<setw(12)<<code[i]<<
        setw(12)<<name[i]<<
        setw(12)<<gender[i]<<
        setw(120)<<salary[i]<<endl;
    }
    return 0;
}


ចូរសរសេរកូដ ដេលទាក់ទង់និង coffe ត្រូវមានទំនិញនៅក្នុងស្តុក មានដូចជា
- code
- name 
- qty 
- price
ត្រូវមានជាមួយ switch case ដែល case
1 - check stock 
2 - order
3 - payment dollar
4 - payment khr