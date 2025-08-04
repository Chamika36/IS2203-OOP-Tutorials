#include <iostream>
using namespace std;

class Count {
    int value;
public:
    Count(int v) : value(v) {}

    void operator++() {  // Unary operator++
        ++value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Count c(5);
    c.display(); // Output: Value: 5
    ++c;  // Calls overloaded operator++
    c.display();  // Output: Value: 6
    return 0;
}

