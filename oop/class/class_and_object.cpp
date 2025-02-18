#include <iostream>
using namespace std;
// create class
class Test{
    private:
    // block data members
        int a=10;
        int b=20;
    public:
    // block Methods properties get_set function member constructor
        void Dislay()
        {
            cout<<"A = "<<a<<endl;
            cout<<"B = "<<b<<endl;
        }
};
int main() {
    // create object
    Test t;
    t.Dislay();
    return 0;
}