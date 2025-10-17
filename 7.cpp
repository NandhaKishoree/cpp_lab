#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;
public:
    void inputTime() {
        cout << "Enter hours: "; cin >> hours;
        cout << "Enter minutes: "; cin >> minutes;
        cout << "Enter seconds: "; cin >> seconds;
    }
    void displayTime() { cout << hours << ":" << minutes << ":" << seconds << endl; }
    friend Time sumTime(Time t1, Time t2);
};

Time sumTime(Time t1, Time t2) {
    Time t;
    t.seconds = t1.seconds + t2.seconds;
    t.minutes = t1.minutes + t2.minutes + t.seconds / 60;
    t.seconds %= 60;
    t.hours = t1.hours + t2.hours + t.minutes / 60;
    t.minutes %= 60;
    return t;
}

int main() {
    Time t1, t2, t3;
    cout << "Enter Time 1:\n"; t1.inputTime();
    cout << "Enter Time 2:\n"; t2.inputTime();
    cout << "\nTime 1: "; t1.displayTime();
    cout << "Time 2: "; t2.displayTime();
    t3 = sumTime(t1, t2);
    cout << "Sum of Time: "; t3.displayTime();
    return 0;
}
