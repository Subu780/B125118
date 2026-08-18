#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string plname;
    int health;
    int score;
    int level;
public:
    void getData() {
        cout << "Enter player name: ";
        cin >> plname;
        cout << "Enter health: ";
        cin >> health;
        cout << "Enter score: ";
        cin >> score;
        cout << "Enter level: ";
        cin >> level;
    }
    friend class GameManager;
};

class GameManager {
public:
    void displayDetails(Player p) {
        cout << "Player Name: " << p.plname << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }
    void checkAlive(Player p) {
        if (p.health > 0) {
            cout << "Status: Alive" << endl;
        } else {
            cout << "Status: Dead" << endl;
        }
    }
    void displayProgress(Player p) {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main() {
    Player p;
    p.getData();
    cout << endl;
    GameManager gm;
    gm.displayDetails(p);
    gm.checkAlive(p);
    gm.displayProgress(p);
    return 0;
}