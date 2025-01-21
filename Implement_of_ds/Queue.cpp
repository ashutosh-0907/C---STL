#include<iostream>
using namespace std;
#define n 5

class Queue{
    int front;
    int rear;
    int ele;
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
        if (front == -1) front = 0; 
        
    }
    int deque(){
        if(front==-1 || front > rear){
            cout<<"underflow";
            return -1;
        }
        int x = arr[front];
        front++;
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
