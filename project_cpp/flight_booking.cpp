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

    Flight(int fNo, string fName, string desti,int capa){
        flightNo = fNo;
        flightName = fName;
        destination=desti;
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

    
    bool bookPassenger(string pname){
        if(passengerName.size()<capacity){
            passengerName.push_back(pname);
            return true;
        }
        return false;
    }
    void printPassenger(){
        for(int i=0;i<passengerName.size();i++){
            cout<<passengerName[i]<<" ";
        }
    }
    void printFlightDetails(){
        cout << "Flight Number: " << flightNo << endl;
        cout << "Flight Name: " << flightName << endl;
        cout << "Destination: " << destination << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Booked Seats: " << passengerName.size() << "/" << capacity << endl;
    }
};

int main(){
    Flight F(123,"ABC","Delhi",5);
    F.bookPassenger("Ashu");
    F.bookPassenger("Nitish");
    F.bookPassenger("Om");
    F.bookPassenger("Ro");
    F.bookPassenger("Deepak");
    F.bookPassenger("Asha");
    F.bookPassenger("Soo");
    F.bookPassenger("Tanni");
    
    F.printFlightDetails();
    F.printPassenger();
    return 0;
}