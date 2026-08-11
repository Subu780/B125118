#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string roll;
    string name;
    int n;
    float* marks = new float[n]; 
    float tot;
    float avg;

public:
    void acceptdetails() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter number of subjects: ";
        cin >> n;
        marks = new float[n];
    }
    void acceptmarks() {
        cout << "Enter marks for " << n << " subjects: ";
        for (int i = 0; i < n; ++i) {
            cin >> marks[i];
        }
    }
    void calculatemarks() {
        tot = 0;
        for (int i = 0; i < n; ++i) {
            tot += marks[i];
        }
        avg = tot / n;
    }
    void displayresult() {
        cout << "\nComplete Result:\n";
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Number of Subjects: " << n << endl;
        cout << "Marks: ";
        for (int i = 0; i < n; ++i) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << tot << endl;
        cout << "Average Marks: " << avg << endl;
    }

    ~Student() {
        delete[] marks;
    }
};

int main() {
    Student* s = new Student;
    s->acceptdetails();
    s->acceptmarks();
    s->calculatemarks();
    s->displayresult();
    delete s;
    return 0;
}