#include <iostream>
// #include <conio.h>
using namespace std;

class Counter {
private:
    int counter;
public:
    Counter() 
    { 
        counter = 0; 
    }
    void increment() 
    {  
        counter++; 
    }
    void decrement() 
    { 
        counter--; 
    }
    int getCounter() 
    { 
        return counter; 
    }
};

int main() {
    Counter c;
    char choice;
    system("cls");
    do {
        cout << "\nCounter: " << c.getCounter() << endl;
        cout << "1. Increment (+)\n2. Decrement (-)\n3. Exit (x)\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '1' || choice == '+') {
            c.increment();
        } else if (choice == '2' || choice == '-') {
            c.decrement();
        } else if (choice == 'x') {
            break;
        } else {
            cout << "Invalid input! Try again.\n";
        }
    } while (true);

    cout << "Final Counter Value: " << c.getCounter() << endl;
    return 0;
}