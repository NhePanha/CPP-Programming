#include <iostream>
#include <fstream>
using namespace std;
int main(){
    //data
    string data;
    // create file stream
    fstream filename;
    // open file
    filename.open("dara.txt",ios::app);
    // check if file open 
    if(!filename.is_open())
    {
        cout<<"Error opening file"<<endl;
        return 1;
    }
    // write data to file
    cout<<"Enter Data : ";getline(cin,data);
    filename<<data<<endl;
    // close file
    filename.close();
    return 0;
}