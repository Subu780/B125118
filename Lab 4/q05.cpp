#include <iostream>
#include <string>

using namespace std;

class FoodOrder {
private:
    int ordid;
    string fooditm;
    int qty;
    float prc;
public:
    void getData() {
        cout << "Enter order ID: ";
        cin >> ordid;
        cout << "Enter food item: ";
        cin >> fooditm;
        cout << "Enter quantity: ";
        cin >> qty;
        cout << "Enter price: ";
        cin >> prc;
    }
    friend void calculateBill(FoodOrder f);
};

void calculateBill(FoodOrder f) {
    float totbill = f.qty * f.prc;
    cout << "Order ID: " << f.ordid << endl;
    cout << "Food Item: " << f.fooditm << endl;
    cout << "Quantity: " << f.qty << endl;
    cout << "Price: " << f.prc << endl;
    cout << "Total Bill: " << totbill << endl;
}

int main() {
    FoodOrder f;
    f.getData();
    cout << endl;
    calculateBill(f);
    return 0;
}