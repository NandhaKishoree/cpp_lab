#include <iostream>
using namespace std;

inline float areaCircle(float r) { return 3.14159 * r * r; }
inline float areaSquare(float s) { return s * s; }
inline float areaRectangle(float l, float w) { return l * w; }
inline float areaTriangle(float b, float h) { return 0.5 * b * h; }

int main() {
    float r, s, l, w, b, h;
    cout << "Enter radius of circle: "; cin >> r;
    cout << "Enter side of square: "; cin >> s;
    cout << "Enter length and width of rectangle: "; cin >> l >> w;
    cout << "Enter base and height of triangle: "; cin >> b >> h;

    cout << "\nAreas:\n";
    cout << "Circle: " << areaCircle(r) << endl;
    cout << "Square: " << areaSquare(s) << endl;
    cout << "Rectangle: " << areaRectangle(l, w) << endl;
    cout << "Triangle: " << areaTriangle(b, h) << endl;
    return 0;
}
