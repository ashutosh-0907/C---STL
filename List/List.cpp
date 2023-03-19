#include<iostream>
#include<list>
using namespace std;
int main()
{
    //Declration of List Container in STL
    list <int> l {1,2,3,4,5};  

    //For Loop Iterator in List
    for(list<int>  :: iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }

    //
    l.push_front(20);

    l.push_back(200);

    l.pop_back();
    l.pop_front();
    
    for(list<int>  :: iterator it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }
}