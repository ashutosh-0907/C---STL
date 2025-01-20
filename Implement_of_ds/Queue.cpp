#include<iostream>
using namespace std;
#define n 5

class Queue{
    int front;
    int rear;
    int element;
    int arr[n];
    public:
    Queue(){
        rear=-1;
        front=-1;
    }
    void enqueue(int ele){
        if(rear==n-1){
            cout<<"overflow";
            return;
        }
        rear++;
        arr[rear]=ele;
        front++;
    }
    int deque(){
        if(front==-1){
            cout<<"underflow";
        }
        int x = arr[rear];
        front--;
        return x;
    }

};

int main(){
    Queue q;
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.enqueue(35);
    q.enqueue(45);
    q.enqueue(55);
    cout<<"The element removed is "<<q.deque()<<endl;
    cout<<"The element removed is "<<q.deque()<<endl;
    cout<<"The element removed is "<<q.deque()<<endl;
    cout<<"The element removed is "<<q.deque()<<endl;
    cout<<"The element removed is "<<q.deque()<<endl;
    cout<<"The element removed is "<<q.deque()<<endl;
    return 0;
}
