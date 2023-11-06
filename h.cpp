//leap year program
#include <iostream>
using namespace std;
bool LeapYear(int year) {
    if (year % 4 == 0) {
        return true;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 == 0) {
        return true;
    } else {
        return true;
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (LeapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}