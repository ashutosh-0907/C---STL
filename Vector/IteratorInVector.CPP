#include <iostream>
#include <vector>        //header files of vector
using namespace std;
int main()
{
    vector <int> v  {10,20,30,40,50};

    //Iterator in Vector 
    vector<int> ::iterator it = v.begin();          //Declaring the Iterator

    cout << *it <<endl;                             //Printing the element
    it++;                                           //Increment

    //Iterator using For Loop 
    for(vector <int> ::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it <<endl;
    }
}