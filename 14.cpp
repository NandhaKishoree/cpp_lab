#include <iostream>
using namespace std;

class Student {
protected:
    string Name; int Rollno; string Course;
public:
    void inputStudent() { cout << "Enter Name: "; cin >> Name; cout << "Enter Roll Number: "; cin >> Rollno; cout << "Enter Course: "; cin >> Course; }
    void displayStudent() { cout << "Name: " << Name << ", Roll Number: " << Rollno << ", Course: " << Course << endl; }
};

class Test : virtual public Student {
protected:
    int marks[3];
public:
    void inputMarks() { cout << "Enter marks of 3 subjects: "; for(int i=0;i<3;i++) cin>>marks[i]; }
};

class GraceMarks : virtual public Student {
protected:
    int BonusMark;
public:
    void inputBonus() { cout << "Enter bonus mark: "; cin >> BonusMark; }
};

class Result : public Test, public GraceMarks {
    int Total;
public:
    void calculateTotal() { Total = BonusMark; for(int i=0;i<3;i++) Total += marks[i]; }
    void displayResult() { displayStudent(); cout << "Total Marks (including bonus): " << Total << endl; }
};

int main() {
    Result r; r.inputStudent(); r.inputMarks(); r.inputBonus(); r.calculateTotal();
    cout << "\nFinal Result:\n"; r.displayResult();
    return 0;
}
