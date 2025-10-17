#include <iostream>
using namespace std;

class Car {
    string brand, model;
    int year;
public:
    void readData() {
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Year: ";
        cin >> year;
    }
    void displayData() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car c1, c2, c3;
    c1.readData();
    c2.readData();
    c3.readData();
    cout << "\nCar Details:\n";
    c1.displayData();
    c2.displayData();
    c3.displayData();
    return 0;
}
