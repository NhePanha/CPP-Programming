#include <iostream>
using namespace std;
class Library{
    protected:
        int id = 1001;
        string room ="VIP";
    public: // methods
};
class Book : public Library{
    private:
        string title = "Book1";
        string author = "Author";
    public: // methods
        void displayDetails(){
            cout << "ID: " << id << endl;
            cout << "Room: " << room << endl;
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
        }
};
int main(){
    Book b;
    b.displayDetails();
    return 0;
}