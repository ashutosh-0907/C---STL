#include<iostream>
#include <string>
using namespace std;
 // namespace std::sting;
class Student{
    
    string name;
    int age;
    public:
    void setname(string n){
        name=n;
    }
    void setage(int a){
        age=a;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }

};
int main(){
    Student s1;
    s1.setname("ashu");
    s1.setage(22);
    cout<<s1.getname()<<endl;
    cout<<s1.getage()<<endl;

    return 0;
}