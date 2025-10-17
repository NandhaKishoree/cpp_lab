#include <iostream>
using namespace std;

class TelephoneBill {
    string Name, Address;
    long long TelNo;
    int NoOfCalls;
public:
    void inputDetails() {
        cout << "Enter Name: "; cin >> Name;
        cout << "Enter Address: "; cin >> Address;
        cout << "Enter Telephone Number: "; cin >> TelNo;
        cout << "Enter Number of Calls: "; cin >> NoOfCalls;
    }
    void displayDetails() {
        cout << "\nName: " << Name << ", Address: " << Address << ", Telephone No.: " << TelNo << endl;
    }
    friend void computeAmount(TelephoneBill t);
};

void computeAmount(TelephoneBill t) {
    int chargePerCall = 2;
    cout << "Amount to be Paid: Rs. " << t.NoOfCalls * chargePerCall << endl;
}

int main() {
    TelephoneBill t;
    t.inputDetails();
    t.displayDetails();
    computeAmount(t);
    return 0;
}
