#include <iostream>
using namespace std;

class Point {
    int x;
public:
    Point(int val) : x(val) {}

    Point operator+(const Point& p) {  // Binary operator+
        return Point(x + p.x);
    }

    void display() {
        cout << "X: " << x << endl;
    }
};

int main() {
    Point p1(3), p2(7);
    Point p3 = p1 + p2;  // Calls operator+
    p3.display();        // Output: X: 10
    return 0;
}

