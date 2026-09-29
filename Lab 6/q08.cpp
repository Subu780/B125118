#include <iostream>
using namespace std;

class Item {
private:
    string name;
    double price;
    int quantity;

public:
    Item(string n, double p , int q){
        name = n;
        price = p;
        quantity = q;
    }

    Item operator+(Item& other) {
        if (name == other.name && price == other.price) {
            return Item(name, price, quantity + other.quantity);
        } else {
            cout << "Cannot combine: Items have different names or prices." << endl;
            return Item("", 0.0, 0);
        }
    }

    void display(){
        cout << "Item: " << name << "        Price: " << price << "        Quantity: " << quantity << endl;
    }
};

int main(){
    Item item1("Notebook", 50.0, 5), item2("Notebook", 50.0, 10);
    Item combined = item1 + item2;
    combined.display();
    return 0;
}