#include <iostream>
#include <queue>
using namespace std;

int main()
{

    //By default, elements in prority queue are 
    //arranged in decending fashion


    //declaration of prority queue
    priority_queue <int> pq;

    //pushing the element into prority queue
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.emplace(1);
    pq.push(-1);


    cout << pq.top() << endl;

    cout << "element of prority queue are";
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    //To insert elements in prority queue in ascending fashion 
    //we to to use vector container 

    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(2);
    pq1.push(3);
    pq1.push(4);
    pq1.push(5);
    pq1.emplace(1);
    pq1.push(-1);


    cout << pq1.top() << endl;

    cout << "element of prority queue are in increasing order";
    while(!pq1.empty())
    {
        cout << pq1.top() << endl;
        pq1.pop();
    }
    return 0;
}