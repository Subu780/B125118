#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string id;
    string name;
    float basic;
    int n = 1;
    float* earnings = new float[n];
    float total;
    float avg;
    int highestmonth;

public:
    void accept() {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> basic;
        cout << "Enter number of months: ";
        cin >> n;

        delete[] earnings;
        earnings = new float[n];

        cout << "Enter earnings for " << n << " months: ";
        for (int i = 0; i < n; ++i) {
            cin >> earnings[i];
        }
    }

    void analyze() {
        total = 0;
        float maxearning = earnings[0];
        highestmonth = 1;

        for (int i = 0; i < n; ++i) {
            total += earnings[i];
            if (earnings[i] > maxearning) {
                maxearning = earnings[i];
                highestmonth = i + 1;
            }
        }
        avg = total / n;
    }

    void display() {
        cout << "\nEmployee Salary Analysis:\n";
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "Number of Months: " << n << endl;
        cout << "Monthly Earnings: ";
        for (int i = 0; i < n; ++i) {
            cout << earnings[i] << " ";
        }
        cout << endl;
        cout << "Total Earnings: " << total << endl;
        cout << "Average Monthly Earning: " << avg << endl;
        cout << "Month with Highest Earning: Month " << highestmonth << endl;
    }

    ~Employee() {
        delete[] earnings;
    }
};

int main() {
    Employee* emp = new Employee;
    emp->accept();
    emp->analyze();
    emp->display();
    delete emp;
    return 0;
}