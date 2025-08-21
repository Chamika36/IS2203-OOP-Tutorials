#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Overload the + operator
    Point operator + (const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    Point p3 = p1 + p2;  // operator+ is called
    p3.display();        // Output: (6, 8)

    return 0;
}

