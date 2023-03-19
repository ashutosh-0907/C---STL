#include <iostream>
#include <vector> //header files of vector
using namespace std;
int main()
{
    // initialization of vector
    vector<int> v;

    // printing the size of vector using size function
    cout << "Size is: " << v.size() << endl;

    // printing the capacity of vector container
    cout << "Capacity is: " << v.capacity() << endl;

    // to push element at the back of vector
    v.push_back(10);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.push_back(20);
    cout << "Size is: " << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    //Increasing the size of vector container
    v.resize(4);
    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    //Pop the element from back
    v.pop_back();
    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;


    //Insertion at specified position from beginning 
    v.insert(v.begin() + 2, 5);
    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.erase(v.begin() + 2);
    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    //clear the element of vector
    v.clear();
    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    // Looping in c++

    int n;
    cout << "enter the number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    // print the loop
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.insert(v.begin() + 2, 100);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "Size is :" << v.size() << endl;
    cout << "Capacity is: " << v.capacity() << endl;

    v.erase(v.begin() + 2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}