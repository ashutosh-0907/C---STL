#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// Flight Class
class Flight {
    int flightNo;
    string flightName;
    string destination;
    int capacity;
    vector<string> passengerName;

public:

    Flight(int fNo, string fName, string desti, int capa) {
        flightNo = fNo;
        flightName = fName;
        destination = desti;
        capacity = capa;
    }

    int getFlightNo() { return flightNo; }
    string getFlightName() { return flightName; }
    string getDestination() { return destination; }
    int getCapacity() { return capacity; }

    bool bookPassenger(string pname) {
        if (passengerName.size() < capacity) {
            passengerName.push_back(pname);
            return true;
        }
        cout << "Flight is full! Can't book " << pname << endl;
        return false;
    }

    void printPassenger() {
        if (passengerName.empty()) {
            cout << "No passengers booked yet.\n";
        } else {
            cout << "Passengers: ";
            for (const auto it : passengerName) {
                cout << it << " ";
            }
            cout << endl;
        }
    }

    void printFlightDetails() {
        cout << "\nFlight Number: " << flightNo << endl;
        cout << "Flight Name: " << flightName << " Airlines" << endl;
        cout << "Destination: " << destination << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Booked Seats: " << passengerName.size() << "/" << capacity << endl;
        printPassenger();
    }
};

// Flight Booking System Class
class FlightBookingSystem {
    unordered_map<int, Flight> flights;

public:
    void addFlight() {
        int fno, capacity;
        string fname, desti;

        cout << "\nEnter Flight Number: ";
        cin >> fno;

        if (flights.find(fno) != flights.end()) {
            cout << "Flight already exists!\n";
            return;
        }


        cout << "Enter Flight Name: ";
        getline(cin, fname);
        cout << "Enter Destination: ";
        getline(cin, desti);
        cout << "Enter Capacity: ";
        cin >> capacity;

        flights[fno] = Flight(fno, fname, desti, capacity);
        cout << "Flight added successfully!\n";
    }

    void bookPassenger() {
        int fno;
        string passengerName;

        cout << "\nEnter Flight Number: ";
        cin >> fno;

        auto it = flights.find(fno);
        if (it == flights.end()) {
            cout << "Flight not found!\n";
            return;
        }

        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        if (it->second.bookPassenger(passengerName)) { // it.first print flight no and it.second value of Flight
            cout << "Passenger " << passengerName << " booked successfully!\n";
        }
    }

    void viewFlightDetails() {
        int fNo;
        cout << "\nEnter Flight Number: ";
        cin >> fNo;

        auto it = flights.find(fNo);
        if (it == flights.end()) {
            cout << "Flight not found!\n";
        } else {
            it->second.printFlightDetails();
        }
    }

    void listAllFlights() {
        if (flights.empty()) {
            cout << "No flights available.\n";
        } else {
            cout << "\nList of Flights:\n";
            for ( auto it : flights) {
                cout << "Flight " << it.second.getFlightNo() << " to " << it.second.getDestination() << endl;
            }
        }
    }
};

int main() {
    FlightBookingSystem system;
    int choice;

    while (true) {
        cout << "\n✈️  Flight Booking System\n";
        cout << "1. Add New Flight\n";
        cout << "2. Book Passenger\n";
        cout << "3. View Flight Details\n";
        cout << "4. List All Flights\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                system.addFlight();
                break;
            case 2:
                system.bookPassenger();
                break;
            case 3:
                system.viewFlightDetails();
                break;
            case 4:
                system.listAllFlights();
                break;
            case 5:
                cout << "Exiting... Thank you!\n";
                return 0;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    }
}
