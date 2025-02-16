#include<iostream>
#include "creating_flight.cpp"
#include "flight_booking_sytem.cpp"

int main(){
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

        switch(choice){
            case 1: 
                addFlight();
                break;
            case 2:
                bookPassenger();
                break;
            case 3:
                viewFlightDetails();
                break;
            case 4:
                listAllFlights();
                break;
            case 5:
                cout << "Exiting... Thank you!\n";
                return 0;
        default:
            cout << "Invalid choice! Please enter a valid option.\n";

        }
    }
}