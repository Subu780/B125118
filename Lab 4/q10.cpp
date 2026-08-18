#include <iostream>
#include <string>

using namespace std;

class SmartDevice {
private:
    string devnam;
    string devtyp;
    bool powstat;

public:
    void getData() {
        cout << "Enter device name: ";
        cin >> devnam;
        cout << "Enter device type: ";
        cin >> devtyp;
        cout << "Enter power status (1 for ON, 0 for OFF): ";
        cin >> powstat;
    }
    friend class HomeController;
};

class HomeController {
public:
    void displayInfo(SmartDevice &d) {
        cout << "Device Name: " << d.devnam << endl;
        cout << "Device Type: " << d.devtyp << endl;
    }

    void turnOn(SmartDevice &d) {
        d.powstat = true;
        cout << "Device turned ON." << endl;
    }

    void turnOff(SmartDevice &d) {
        d.powstat = false;
        cout << "Device turned OFF." << endl;
    }

    void displayStatus(SmartDevice &d) {
        if (d.powstat) {
            cout << "Power Status: ON" << endl;
        } else {
            cout << "Power Status: OFF" << endl;
        }
    }
};

int main() {
    SmartDevice d;
    d.getData();
    cout << endl;
    HomeController hc;
    hc.displayInfo(d);
    hc.displayStatus(d);
    cout << endl;
    hc.turnOff(d);
    hc.displayStatus(d);
    return 0;
}