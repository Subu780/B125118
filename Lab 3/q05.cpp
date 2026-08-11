#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string roll;
    string name;
    float marks;

public:
    void accept() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student* s = new Student;
    s->accept();
    cout << "\nStudent Details:\n";
    s->display();
    delete s;
    s = nullptr;
    return 0;
}