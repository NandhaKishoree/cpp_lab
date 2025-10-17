#include <iostream>
using namespace std;

float area(float r) { return 3.14159 * r * r; }
float area(int s) { return s * s; }
float area(float l, float w) { return l * w; }
float area(float b, float h, int type) { return 0.5 * b * h; }

int main() {
    float r, l, w, b, h; int s;
    cout << "Enter radius of circle: "; cin >> r;
    cout << "Enter side of square: "; cin >> s;
    cout << "Enter length and width of rectangle: "; cin >> l >> w;
    cout << "Enter base and height of triangle: "; cin >> b >> h;

    cout << "\nAreas:\n";
    cout << "Circle: " << area(r) << endl;
    cout << "Square: " << area(s) << endl;
    cout << "Rectangle: " << area(l, w) << endl;
    cout << "Triangle: " << area(b, h, 0) << endl;
    return 0;
}
