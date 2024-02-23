#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes;

public:
    void input(int& h, int& m) {
        cout << "Enter the hours: ";
        cin >> h;
        cout << "Enter the minutes: ";
        cin >> m;
    }

    void add(const Time& t, Time& result) {
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours + result.minutes / 60;
        result.minutes %= 60;
    }

    void display() {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};

int main() {
    Time t1, t2, sum;
    t1.input(t1.hours, t1.minutes);
    t2.input(t2.hours, t2.minutes);
    t1.add(t2, sum);
    cout << "The sum of the two times is: ";
    sum.display();
    return 0;
}