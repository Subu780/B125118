#include <iostream>
#include <string>

using namespace std;

class Exam {
private:
    string stdnam;
    string subnam;
    float marks;
    float maxmks;
public:
    void getData() {
        cout << "Enter student name: ";
        cin >> stdnam;
        cout << "Enter subject: ";
        cin >> subnam;
        cout << "Enter marks obtained: ";
        cin >> marks;
        cout << "Enter maximum marks: ";
        cin >> maxmks;
    }
    friend class Result;
};

class Result {
public:
    void displayResult(Exam e) {
        float percentage = (e.marks / e.maxmks) * 100;
        cout << "Student Name: " << e.stdnam << endl;
        cout << "Subject: " << e.subnam << endl;
        cout << "Marks Obtained: " << e.marks << endl;
        cout << "Maximum Marks: " << e.maxmks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        if (percentage >= 40) {
            cout << "Status: Pass" << endl;
        } else {
            cout << "Status: Fail" << endl;
        }
    }
};

int main() {
    Exam e;
    e.getData();
    cout << endl;
    Result r;
    r.displayResult(e);
    return 0;
}