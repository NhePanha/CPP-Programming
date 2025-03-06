#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream filename;
    filename.open("dara.txt",ios::in);
    if(!filename.is_open())
    {
        cout<<"Error opening file"<<endl;
        return 1;
    }
    string line;
    while(getline(filename,line))
    {
        cout<<line<<endl;
    }
    filename.close();
}