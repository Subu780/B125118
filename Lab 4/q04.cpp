#include <iostream>
#include <string>

using namespace std;

class Song {
private:
    string songtitle;
    string artname;
    float dur;
public:
    void getData() {
        cout << "Enter song name: ";
        cin >> songtitle;
        cout << "Enter artist name: ";
        cin >> artname;
        cout << "Enter duration: ";
        cin >> dur;
    }
    friend void CompareSongs(Song s1, Song s2);
};

void CompareSongs(Song s1, Song s2) {
    if (s1.dur > s2.dur) {
        cout << s1.songtitle << " is longer than " << s2.songtitle << endl;
    } else if (s2.dur > s1.dur) {
        cout << s2.songtitle << " is longer than " << s1.songtitle << endl;
    } else {
        cout << "Both songs have the same duration" << endl;
    }
}

int main() {
    Song s1, s2;
    cout << "Enter details for first song:" << endl;
    s1.getData();
    cout << endl << "Enter details for second song:" << endl;
    s2.getData();   
    cout << endl;
    CompareSongs(s1, s2);
    return 0;
}