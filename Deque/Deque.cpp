#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque <int> dq;
    dq.push_front(20);
    dq.emplace_back(30);
    dq.push_back(40);

    for(deque <int> :: iterator it = dq.begin(); it != dq.end(); it++)
    {
        cout << *it <<endl;
    }
    return 0;
}