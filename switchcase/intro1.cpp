#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    for(i=0;i<3;i++)
    {
        cout<<endl;
        for(j=0;j<5;j++)
        {
            cout<<endl;
            for(int k = 0;k<10;k++)
            {
                cout<<" "<<k;
            }
        }
    }
}