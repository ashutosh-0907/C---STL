#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //declaration of stack
    queue <int> q;

    //pushing the element into stack
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(1);
    q.push(-1);


    cout << q.front() << endl;

    cout << "element of queue are";
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    cout << q.size();
   /* cout << q.back();
    cout << q.emplace();*/
    return 0;
}