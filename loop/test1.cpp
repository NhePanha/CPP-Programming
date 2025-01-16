#include <iostream>
#include <windows.h>
using namespace std;
void Loading()
{
    system("Color a");
    char x =219;
    //char x =178;
    //char x =175;
    //char x =177;
   cout<<"\n""\t\t\t\t        LOADING.....\t\t\t\t\n";
   cout<<"\t\t\t"; for(int i=0;i<40;i++)
  {
    cout<<x;
    Sleep(80);
  }
  system("cls");
}
int main() {
    Loading();

    cout << "Welcome to the loading screen!" << endl;
    cout << "This program will display a loading screen using ASCII characters." << endl;
    cout << "Press any key to continue...";
    cin.get();
    return 0;
}