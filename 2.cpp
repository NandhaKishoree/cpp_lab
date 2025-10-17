#include <iostream>
using namespace std;

class Book {
    int BookID;
    string BookName;
    float BookPrice;
public:
    void inputDetails() {
        cout << "Enter Book ID: ";
        cin >> BookID;
        cout << "Enter Book Name: ";
        cin >> BookName;
        cout << "Enter Book Price: ";
        cin >> BookPrice;
    }
    void displayDetails() {
        cout << "Book ID: " << BookID << ", Name: " << BookName << ", Price: " << BookPrice << endl;
    }
    void total_cost(int n) {
        cout << "Total Cost: " << BookPrice * n << endl;
    }
};

int main() {
    Book b1, b2, b3;
    int n1, n2, n3;
    b1.inputDetails();
    b2.inputDetails();
    b3.inputDetails();
    cout << "\nDetails and Total Cost:\n";
    b1.displayDetails();
    cout << "Enter number of copies for Book 1: ";
    cin >> n1;
    b1.total_cost(n1);
    b2.displayDetails();
    cout << "Enter number of copies for Book 2: ";
    cin >> n2;
    b2.total_cost(n2);
    b3.displayDetails();
    cout << "Enter number of copies for Book 3: ";
    cin >> n3;
    b3.total_cost(n3);
    return 0;
}
