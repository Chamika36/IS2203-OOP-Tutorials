#include <iostream>
using namespace std;

void counterDemo() {
    static int staticCount = 0;  // static local variable
    int normalCount = 0;         // normal local variable

    staticCount++;
    normalCount++;

    cout << "Static Count: " << staticCount 
         << " | Normal Count: " << normalCount << endl;
}

int main() {
    counterDemo();
    counterDemo();
    counterDemo();
    return 0;
}


