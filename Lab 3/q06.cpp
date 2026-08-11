#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string id;
    string name;
    float sal;

public:
    void accept() {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> sal;
    }
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << sal << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee* emp = new Employee[n];
    cout << "Enter details for " << n << " employees:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Employee " << i + 1 << ":\n";
        (emp + i)->accept();
    }
    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Employee " << i + 1 << ":\n";
        (emp + i)->display();
    }
    delete[] emp;
    emp = nullptr;
    return 0;
}