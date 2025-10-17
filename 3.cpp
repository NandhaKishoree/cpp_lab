#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    Rectangle() {
        length = 0;
        width = 0;
    }
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
    ~Rectangle() {
        cout << "Rectangle object destroyed" << endl;
    }
};

int main() {
    int l, w;
    cout << "Enter length and width for rectangle 1: ";
    cin >> l >> w;
    Rectangle r1(l, w);
    Rectangle r2;
    cout << "\nRectangle 1 Details:\n";
    r1.display();
    cout << "Rectangle 2 Details:\n";
    r2.display();
    return 0;
}
