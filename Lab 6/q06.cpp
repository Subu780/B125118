#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c = 0){
        count = c;
    }

    // Prefix increment (++c)
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Postfix increment (c++)
    Counter operator++(int) {
        Counter temp = *this;
        count++;
        return temp;
    }

    void display(){
        cout << "Count: " << count << endl;
    }
};

int main(){
    Counter counter(5);
    cout << "Initial: "; counter.display();
    ++counter;
    cout << "After Prefix (++c): "; counter.display();
    counter++;
    cout << "After Postfix (c++): "; counter.display();
}