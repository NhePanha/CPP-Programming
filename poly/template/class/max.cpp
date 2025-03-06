#include <iostream>

using namespace std;
template <class T>
class Sum{
    T a, b;
    public:
        Sum(T x, T y)
        {
            a = x;
            b = y;
        }
        T getMax();
};
template <class T>
T Sum<T>::getMax()
{
    T max;
    if(a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}
int main()
{
    Sum<int> sum(10,2);
    cout<<"Max : "<<sum.getMax()<<endl;
    return 0;
}