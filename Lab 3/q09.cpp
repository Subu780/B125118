#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string id;
    string name;
    float price;
    int qty;
public:
    void accept() {
        cout << "Enter product ID: ";
        cin >> id;
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter quantity: ";
        cin >> qty;
    }
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << qty << endl;
    }
    float getcost() {
        return price * qty;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;
    Product* prod = new Product[n];
    cout << "\nEnter product details:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Product " << i + 1 << ":\n";
        (prod + i)->accept();
    }
    cout << "\nProduct Details:\n";
    float totalcost = 0;
    for (int i = 0; i < n; ++i) {
        cout << "Product " << i + 1 << ":\n";
        (prod + i)->display();
        totalcost += (prod + i)->getcost();
    }
    cout << "\nTotal Amount: " << totalcost << endl;
    delete[] prod;
    return 0;
}