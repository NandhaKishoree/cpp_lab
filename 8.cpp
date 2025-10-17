#include <iostream>
using namespace std;

class Number {
    int value;
public:
    void input() { cout << "Enter a number: "; cin >> value; }
    void display() { cout << "Value: " << value << endl; }
    Number operator++() { Number temp; temp.value = ++value; return temp; }
};

int main() {
    Number n1, n2;
    n1.input();
    n2 = ++n1;
    cout << "After increment:\n";
    n1.display();
    n2.display();
    return 0;
}
