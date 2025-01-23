#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i,j,k;
    int row,col,block;
    // code[size_of_block][size_of_row][column]
    int code[100][100][100];
    // code[size_of_block][size_of_row][column][size_of_string]
    char name[100][100][100][100];
    int qty[100][100][100];
    double price[100][100][100];

    cout<<"Enter Block : ";cin>>block;
    cout<<"Enter Row   : ";cin>>row;
    cout<<"Enter Column : ";cin>>col;

    for(k=0;k<block;k++)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cout<<"Enter Code : ";cin>>code[k][i][j];
                cout<<"Enter Name : ";cin.ignore();cin.getline(name[k][i][j],100);
                cout<<"Enter Qty  : ";cin>>qty[k][i][j];
                cout<<"Enter Price : ";cin>>price[k][i][j];
            }
        }
    }
    for(k=0;k<block;k++)
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cout<<setw(12)<<code[k][i][j]<<
                setw(12)<<name[k][i][j]<<
                setw(12)<<qty[k][i][j]<<
                setw(12)<<price[k][i][j]<<endl;
            }
        }
    }
    return 0;
}