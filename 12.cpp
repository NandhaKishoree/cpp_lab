#include <iostream>
using namespace std;

class online_shopping {
public:
    string item_name;
    int quantity;
    float unit_price;
    void get_item() {
        cout << "Enter item name: ";
        cin >> item_name;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter unit price: ";
        cin >> unit_price;
    }
};

class Shipping_details {
public:
    float shipping_charge;
    void get_shipping() {
        cout << "Enter shipping charge: ";
        cin >> shipping_charge;
    }
};

class Bill : public online_shopping, public Shipping_details {
public:
    void display() {
        float total = (quantity * unit_price) + shipping_charge;
        cout << "\nItem Name: " << item_name;
        cout << "\nQuantity: " << quantity;
        cout << "\nUnit Price: " << unit_price;
        cout << "\nShipping Charge: " << shipping_charge;
        cout << "\nTotal Bill: " << total << endl;
    }
};

int main() {
    Bill b;
    b.get_item();
    b.get_shipping();
    b.display();
    return 0;
}
