#include<iostream> 

namespace first{
    int x=11;
}

namespace second{
    int x=14;
}

int main(){
    std::cout<<second::x;
}

//Namespace provide solution to name conflict 
//A namespace allows for identical name entities