#include <iostream>
using namespace std;
class Sum{
    private:
        int a;
        int b;
    public:
        // overload function
        void sum(int a)
        {
            this-> a = a;
            this-> b = 0;
        }
        void sum(int a, int b)
        {
            this-> a = a;
            this-> b = b;
        }
        void Display()
        {
            cout<<"Value A : "<<a<<endl;
            cout<<"Value B : "<<b<<endl;
        }
};
int main()
{
    Sum s;
    s.sum(10);
    s.Display();
    s.sum(5, 15);
    s.Display();
    return 0;
}