#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int f, int in){
        feet = f;
        inches = in;
    }

    Distance operator+(Distance d) {
        int totalInches = inches + d.inches;
        int totalFeet = feet + d.feet + (totalInches / 12);
        totalInches %= 12;
        return Distance(totalFeet, totalInches);
    }

    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main(){
    Distance d1(1,7),d2(2,8);
    Distance d3 = d1 + d2;
    cout << "New Distance: " << endl;
    d3.display();
    return 0;
}