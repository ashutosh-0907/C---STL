#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 33;
    int *ptr = &num;
    cout<<"Memory address of variable  "<<num <<" is : "<<ptr<<endl;
    cout<<"Value stored in number is : "<<*ptr<<endl;
    int **ptr1 = &ptr;
    cout<<"Memory address of pointer is : "<<&ptr<<endl;
    cout<<"Pointer pointing to pointer is : "<<**ptr1<<endl;
    return 0;

}