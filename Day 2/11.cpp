#include <iostream>
using namespace std;

int main() {
    const int maxSpeed = 120;  // constant variable

    cout << "The maximum speed is: " << maxSpeed << " km/h" << endl;

    maxSpeed = 150;  // ? Error: assignment of read-only variable ‘maxSpeed’

    return 0;
}

