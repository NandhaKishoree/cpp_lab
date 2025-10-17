#include <iostream>
using namespace std;

class BankAccount {
protected:
    long account_number; double balance;
public:
    void inputAccount() {
        cout << "Enter Account Number: "; cin >> account_number;
        cout << "Enter Balance: "; cin >> balance;
    }
    void deposit(double amount) { balance += amount; }
    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Insufficient balance!\n";
    }
    void display() { cout << "Account Number: " << account_number << ", Balance: " << balance << endl; }
};

class SavingsAccount : public BankAccount {
    double rate_of_interest;
public:
    void inputSavings() { inputAccount(); cout << "Enter Rate of Interest (%): "; cin >> rate_of_interest; }
    void calculateInterest() { cout << "Interest Amount: " << balance * rate_of_interest / 100 << endl; }
    void displaySavings() { display(); cout << "Rate of Interest: " << rate_of_interest << "%\n"; calculateInterest(); }
};

class CurrentAccount : public BankAccount {
    double minimum_balance;
public:
    void inputCurrent() { inputAccount(); cout << "Enter Minimum Balance: "; cin >> minimum_balance; }
    void calculateServiceCharge() { if (balance < minimum_balance) { double charge = minimum_balance - balance; balance -= charge; cout << "Service Charge Deducted: " << charge << endl; } }
    void displayCurrent() { display(); calculateServiceCharge(); }
};

int main() {
    SavingsAccount s; CurrentAccount c;
    cout << "Savings Account:\n"; s.inputSavings(); s.deposit(1000); s.withdraw(500); cout << "\nSavings Account Details:\n"; s.displaySavings();
    cout << "\nCurrent Account:\n"; c.inputCurrent(); c.deposit(2000); c.withdraw(1500); cout << "\nCurrent Account Details:\n"; c.displayCurrent();
    return 0;
}
