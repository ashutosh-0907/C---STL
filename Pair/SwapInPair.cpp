#include <iostream>
#include <utility> //header file of pair STL
using namespace std;

int main()
{

    // Intialization of pair
    pair<int, string> p;
    p.first = 100;
    p.second = "33";

    // Intialization of second pair using make_pair function
    pair<int, string> p1;
    p1 = make_pair(1, "ASHUTOSH");

    // swap function to swap the values of pair
    p.swap(p1);

    // print the pair
    cout << p.first << " " << p.second << endl;

    cout << p1.first << " " << p1.second;

    return 0;
}