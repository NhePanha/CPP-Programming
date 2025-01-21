// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[20][20];  //array[size_row][size_column]
//     int row,col;
//     int i,j;
//     cout<<"Enter Number Of Row and Column : ";cin>>row;cin>>col;

//     for(i=0;i<row;i++)
//     {
//         for(j=0;j<col;j++)
//         {
//             cout<<"Enter A : ";cin>>a[i][j];
//         }
//     }
//     for(i=0;i<row;i++)
//     {
//         cout<<endl;
//         for(j=0;j<col;j++)
//         {
//             cout<<a[i][j]<<"     ";
//         }
//     }
// }

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int code[100][100];
    char name[100][100][100]; //
    int qty[100][100];
    double price[100][100];
    int i,j,row,col;
    cout<<"Enter Row : ";cin>>row;
    cout<<"Enter Column : ";cin>>col;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Enter Code : ";cin>>code[i][j];
            cout<<"Enter Name : ";cin>>name[i][j];
            cout<<"Enter Qty  : ";cin>>qty[i][j];
            cout<<"Enter Price : ";cin>>price[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<setw(12)<<code[i][j]<<
            setw(12)<<name[i][j]<<
            setw(12)<<qty[i][j]<<
            setw(12)<<price[i][j]<<endl;
        }
    }
    return 0;
}