#include <iostream>
#include "../math/math.h" 

using namespace std;

int main() {
    int x = 10;
    int y = 5;
    int z = 0;

    cout << "--- Math Library Test ---" << endl;

    cout << "Add (10 + 5): " << add(x, y) << endl;

    cout << "Subtract (10 - 5): " << subtract(x, y) << endl;

    cout << "Multiply (10 * 5): " << multiply(x, y) << endl;

    cout << "Divide (10 / 5): " << divide(x, y) << endl;

    cout << "Divide by Zero (10 / 0): " << divide(x, z) << endl;

}