#include <iostream>
#include <string>

using namespace std;

class TrainSeat {
private:
    int stnum;
    string pasnam;
    bool bkstat;
public:
    void getData() {
        cout << "Enter seat number: ";
        cin >> stnum;
        cout << "Is seat booked (1 for yes, 0 for no): ";
        cin >> bkstat;
        if (bkstat) {
            cout << "Enter passenger name: ";
            cin >> pasnam;
        } else {
            pasnam = "None";
        }
    }
    friend class TicketChecker;
};

class TicketChecker {
public:
    void displayDetails(TrainSeat t) {
        cout << "Seat Number: " << t.stnum << endl;
    }
    void checkBooking(TrainSeat t) {
        if (t.bkstat) {
            cout << "Booking Status: Booked" << endl;
            cout << "Passenger Name: " << t.pasnam << endl;
        } else {
            cout << "Booking Status: Available" << endl;
        }
    }
};

int main() {
    TrainSeat t;
    t.getData();
    cout << endl;
    TicketChecker tc;
    tc.displayDetails(t);
    tc.checkBooking(t);
    return 0;
}