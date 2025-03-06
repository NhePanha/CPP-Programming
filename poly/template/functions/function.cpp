#include <iostream>
using namespace std;
template<typename T>
T Sum(T a, T b)
{
    return a + b;
}
int main()
{
    int x = 5, y = 10;
    double z = 3.5, w = 7.8;
    cout << "Sum of " << x << " and " << y << " is " << Sum(x, y) << endl;
    cout << "Sum of " << z << " and " << w << " is " << Sum(z, w) << endl;
    return 0;
}