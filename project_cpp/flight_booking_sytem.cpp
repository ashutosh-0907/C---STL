#include<iostream>
#include "creating_flight.cpp"
#include <unordered_map>
using namespace std;

class FlightBookingSytem{

    unordered_map<string, Flight>flights;
    public:

    void addFlight(){

        int fno,capacity;
        string fname,desti;

        cout << "\nEnter Flight Number: ";
        cin >> fno;

        if(flights.find(fno) != flights.end()){
            cout<<"Flight already exit"<<endl;
            return;
        }

        cout << "Enter Flight Name: ";
        getline(cin, fName);
        cout << "Enter Destination: ";
        getline(cin, desti);
        cout << "Enter Capacity: ";
        cin >> capacity;
        flights[fno] = Flight(fno,fname,desti,capacity);

    }
    void bookPassenger(){

        int fno, capacity;
        string fname, desti;

        auto it = flights.find(fno);
        if (it == flights.end()) {
            cout << " Flight not found!\n";
            return;
        }

        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        if (it->second.bookPassenger(passengerName)) {
            cout << " Passenger " << passengerName << " booked successfully!\n";
        } else {
            cout << " Flight is full!\n";
        }
    }
    void viewFlightDetails(){

        int fNo;
        cout << "\nEnter Flight Number: ";
        cin >> fNo;

        auto it = flights.find(flightNumber);
        if(it==flights.end()){
            cout<<"Flight not found";
        }
        else {
            it->second.displayDetails();
        }

    }
    void displayFlights(){

        if (flights.empty()) {
            cout << "No flights available.\n";
        }
        else{
            for(auto it:flights){
                cout<<it.second.getFlightNumber() << " to " << it.second.getDestination() << endl;
            }
        }

    }
};