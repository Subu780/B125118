#include <iostream>
#include <string>

using namespace std;

class Door {
private:
    int drnum;
    bool lkstat;

public:
    void getData() {
        cout << "Enter door number: ";
        cin >> drnum;
        cout << "Enter lock status (1 for locked, 0 for unlocked): ";
        cin >> lkstat;
    }
    friend class SecuritySystem;
};

class SecuritySystem {
public:
    void checkStatus(Door dr) {
        cout << "Door Number: " << dr.drnum << endl;
        if (dr.lkstat) {
            cout << "Status: Locked" << endl;
        } else {
            cout << "Status: Unlocked" << endl;
        }
    }
};

int main() {
    Door dr;
    dr.getData();
    cout << endl;
    SecuritySystem sys;
    sys.checkStatus(dr);
    return 0;
}