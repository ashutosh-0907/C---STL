#include <iostream>
#include <set>
using namespace std;

int main()
{
    //By default, elements in set are 
    //arranged in ascending fashion

    //declaration of set
    set <int> s;

    //pushing the element into set
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.emplace(1);
    s.insert(-1);


    cout << "element of set are";
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it <<endl;
    
    }

    int n;
    cout << "enter element to find " << endl;
    cin >> n;

    for(auto it = s.begin(); it != s.end(); it++)
    {
        if(*it == n)
        cout << "n is found"<<endl;
    }

    s.erase(s.begin());

    cout <<"element after deletion" << endl;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it <<endl;
    }
    cout <<"size of the set container is " << s.size();
    return 0;
}