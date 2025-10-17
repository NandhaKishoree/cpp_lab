#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void inputPerson() {
        cout << "Enter name: "; cin >> name;
        cout << "Enter age: "; cin >> age;
    }
    void display() { cout << "Name: " << name << ", Age: " << age << endl; }
};

class Student : public Person {
    int roll_number;
public:
    void inputStudent() {
        inputPerson();
        cout << "Enter roll number: "; cin >> roll_number;
    }
    void showDetails() {
        display();
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s;
    s.inputStudent();
    cout << "\nStudent Details:\n";
    s.showDetails();
    return 0;
}
