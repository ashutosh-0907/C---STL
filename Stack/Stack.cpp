#include <iostream>
#include <stack>
using namespace std;

int main()
{
    //declaration of stack
    stack<int> st;

    //pushing the element into stack
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(1);
    st.push(-1);


    cout << st.top() << endl;

    cout << "element of stack are";
    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}