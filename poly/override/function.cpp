#include <iostream>
#include <cmath>

using namespace std;
class Test1{
    public:
        void Message()
        {
            cout<<"Hello World!"<<endl;
        }
};
class Test2: public Test1{
    public:
    // override methods
        void Message()
        {
            cout<<"This is Child Class!"<<endl;
        }
};
int main(){
    Test2 obj;
    obj.Message();
    return 0;
}