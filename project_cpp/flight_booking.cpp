#include<iostream>
#include<vector>
using namespace std;

class Flight{

    int flightNo;
    string flightName;
    string destination;
    int capacity;
    vector<string>passengerName; 
    int seat;

    public: 

    Flight(int fNo, string fName, int capa){
        flightNo = fNo;
        flightName = fName;
        capacity = capa;
        seat=0;
    }

    int getFlightNo(){
        return flightNo;
    }
    string getFlightName(){
        return flightName;
    }
    string getDestination() {
        return destination;
    }

    int getCapacity(){
        return capacity;
    }

    bool isFull(){
        if(seat==capacity){
            cout<<"No seat vacant";
        }
        if(capacity==0){
            cout<<"Please enter valid capacity";
        }
    }
    void addPassenger(string namePassengr){
        passengerName.push_back(namePassengr);
        seat++;
    }

    



};