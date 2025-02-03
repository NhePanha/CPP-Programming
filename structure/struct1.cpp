#include<iostream>
using namespace std;
// create struct
struct structurename{
    int a;
    int b;
    int c;
    int d;
}stn;
int main()
{
    //create object struct local object
    //struct structurename stn;
    cout<<"Enter A : ";cin>>stn.a;
    cout<<"Enter B : ";cin>>stn.b;
    cout<<"Enter C : ";cin>>stn.c;
    cout<<"Enter D : ";cin>>stn.d;
    return 0;
}