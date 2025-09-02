#include <iostream>
using namespace std;

// Function template with two type parameters
template <typename T1, typename T2>
void showSum(T1 a, T2 b) {
    cout << "Sum: " << a + b << endl;
}

int main() {
    showSum<int,int>(10, 20);        // int + int
    showSum<double,int>(5.5, 2);        // double + int
    showSum<string,string>("Hello ", "World");  // string + string

    return 0;
}

