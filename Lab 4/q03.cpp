#include <iostream>
#include <string>

using namespace std;

class ParkingSlot {
private:
    int slotNum;
    string vehNum;
    bool occStatus;
public:
    void getData() {
        cout << "Enter slot number: ";
        cin >> slotNum;
        cout << "Is slot occupied (1 for yes, 0 for no): ";
        cin >> occStatus;
        if (occStatus) {
            cout << "Enter vehicle number: ";
            cin >> vehNum;
        } else {
            vehNum = "None";
        }
    }
    friend void checkSlot(ParkingSlot slot);
};

void checkSlot(ParkingSlot slot) {
    cout << "Slot Number: " << slot.slotNum << endl;
    if (slot.occStatus) {
        cout << "Occupancy Status: Occupied" << endl;
        cout << "Vehicle Number: " << slot.vehNum << endl;
    } else {
        cout << "Occupancy Status: Available" << endl;
    }
}

int main() {
    ParkingSlot mySlot;
    mySlot.getData();
    cout << endl;
    checkSlot(mySlot);
    return 0;
}