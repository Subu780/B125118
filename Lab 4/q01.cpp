#include <iostream>
#include <string>

using namespace std;
class Diary{
    string name;
    int entries;
    string last;
public:
    void get(){
        cout << "Enter the name of the diary: ";
        cin >> name;
        cout << "Enter the number of entries: ";
        cin >> entries;
        cout << "Enter last entry : ";
        cin >> last;
    }
    friend void displayDiary(Diary d);
};

void displayDiary(Diary d){
    cout << "Name: " << d.name << endl;
    cout << "Entries: " << d.entries << endl;
    cout << "Last entry: " << d.last << endl;
}

int main(){
    Diary d1;
    d1.get();
    displayDiary(d1);
    return 0;
}