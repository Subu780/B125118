#include <iostream>
#include <string>

using namespace std;

class Mobile {
private:
    string brand;
    string model;
    int batterypercentage;

public:
    void getdata() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter battery percentage: ";
        cin >> batterypercentage;
    }

    friend void checkbattery(Mobile mob);
};

void checkbattery(Mobile mob) {
    cout << "Mobile Details" << endl;
    cout << "Brand: " << mob.brand << endl;
    cout << "Model: " << mob.model << endl;
    cout << "Battery Percentage: " << mob.batterypercentage << "%" << endl;
    if (mob.batterypercentage < 20) {
        cout << "Status: Battery Low" << endl;
    } else {
        cout << "Status: Battery Normal" << endl;
    }
}

int main() {
    Mobile m;
    m.getdata();
    cout << endl;
    checkbattery(m);
    return 0;
}