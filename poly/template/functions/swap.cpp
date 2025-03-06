#include <iostream>
using namespace std;
template<typename T>
// pass by reference
void Swap(T* a, T* b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
    cout << "After swapping: a = " << *a << ", b = " << *b << endl;
}
int main()
{
    int x = 5, y = 10;
    double z = 3.5, w = 7.8;
    Swap(&x, &y);
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    return 0;
}