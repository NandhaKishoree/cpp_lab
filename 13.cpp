#include <iostream>
using namespace std;

class c_polygon {
public:
    virtual void area() { cout << "Area of polygon is unknown.\n"; }
};

class c_rectangle : public c_polygon {
    float length, width;
public:
    void input() { cout << "Enter length and width of rectangle: "; cin >> length >> width; }
    void area() override { cout << "Area of Rectangle: " << length * width << endl; }
};

class c_triangle : public c_polygon {
    float base, height;
public:
    void input() { cout << "Enter base and height of triangle: "; cin >> base >> height; }
    void area() override { cout << "Area of Triangle: " << 0.5 * base * height << endl; }
};

int main() {
    c_polygon *p1, *p2;
    c_rectangle r; c_triangle t;
    r.input(); t.input();
    p1 = &r; p2 = &t;
    cout << "\nCalculating Areas using Virtual Functions:\n"; p1->area(); p2->area();
    return 0;
}
