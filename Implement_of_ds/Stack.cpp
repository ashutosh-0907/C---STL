#include<bits/stdc++.h>
using namespace std;
#define n 5 


class Stack{

    int top;
    int ele;
    int arr[n];

    public:
    Stack(){
        top=-1;
    }
    void push(int ele){
        if(top==n-1){
            cout<<"Overflow";
        }
        top++;
        arr[top]=ele;
        
    }
    int pop(){
        if(top==-1){
            cout<<"underflow";
            return -1;
        }
        int x = arr[top];
        top--;
        return x;
    }


};
int main(){
    Stack s;
    s.push(5);
    s.push(13);
    s.push(25);
    s.push(33);
    s.push(5);
    s.push(45);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    return 0;
}