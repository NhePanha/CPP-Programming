#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> mylist = {2,4,6,7,5,7,9};
    // Remove all elements with value 2
    mylist.remove(2);
    // Print the list
    for (int i : mylist){
        cout << i << " ";
        cout << endl;
    }
    return 0;
}