#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    RoomBooking(string guest, int room, int days)
        : guestName(guest), roomNumber(room), daysBooked(days) {
        cout << "Room booking confirmed\n";
    }

    void displayBooking() const {
        cout << "\n--- ROOM BOOKING DETAILS ---\n"
             << "Guest name: " << guestName << '\n'
             << "Room number: " << roomNumber << '\n'
             << "Days booked: " << daysBooked << '\n';
    }

    ~RoomBooking() {
        cout << "Booking ended, room released\n";
    }
};

int main() {
    string guest;
    int room, days;

    cout << "Enter guest name: ";
    cin>> guest;
    cout << "Enter room number: ";
    cin >> room;
    cout << "Enter number of days booked: ";
    cin >> days;

    while (room <= 0 || days <= 0) {
        cout << "Room number and days must be positive. Enter room and days again: ";
        cin >> room >> days;
    }

    RoomBooking booking(guest, room, days);
    booking.displayBooking();
    return 0;
}

