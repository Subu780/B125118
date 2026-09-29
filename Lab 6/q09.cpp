#include <iostream>
using namespace std;


class Temperature {
private:
    double celsius;

public:
    Temperature(double c){
        celsius = c;
    }

    bool operator<(Temperature& t) {
        return this->celsius < t.celsius;
    }

    bool operator>(Temperature& t){
        return this->celsius > t.celsius;
    }

    bool operator==(Temperature& t){
        return this->celsius == t.celsius;
    }

    double getTemp() {
        return celsius; 
    }
};

int main(){
    Temperature t1(36.5),t2(47.67);
    if(t1 > t2){
        cout << "First Temperature is higher" << endl;
    }
    else if(t2 > t1){
        cout << "Second Temperature is higher" << endl;
    }
    else{
        cout << "Both tempertaures are same" << endl;
    }
    return 0;
}