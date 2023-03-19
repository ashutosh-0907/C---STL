#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> p;
    p.first = 100;
    p.second = "33";
    // cout<< p.first <<" "<< p.second<<endl;

    pair<int, string> p1;
    p1 = make_pair(1, "ASHUTOSH");
    // cout<< p1.first <<" "<< p1.second;

    p.swap(p1);
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second;
    return 0;
}