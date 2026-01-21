#include "MathLibrary.h"
#include <iostream>
using namespace std;

double CalculatePerimeter(Triangle t) {
    return t.a + t.b + t.c;
}

void PlotTriangle(Triangle t) {
    cout << "Triangle: " << t.a << ", " << t.b << ", " << t.c << endl;
}