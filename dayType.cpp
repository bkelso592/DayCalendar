#include "dayType.h"
#include <iostream>

dayType::dayType() {
    day = "Sunday";
}

dayType::dayType(const string& d) {
    day = d;
}

void dayType::print() {
    cout << day << endl;
}

string dayType::getNextDay() {
    string daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int index = 0;
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i]) {
            index = i;
            break;
        }
    }
    return daysOfWeek[(index + 1) % 7];
}

string dayType::getPrevDay() {
    string daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int index = 0;
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i]) {
            index = i;
            break;
        }
    }
    return daysOfWeek[(index + 6) % 7];
}

string dayType::getDay() {
    return day;
}

string dayType::addDays(int numDays) {
    string daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    int index = 0;
    for (int i = 0; i < 7; ++i) {
        if (day == daysOfWeek[i]) {
            index = i;
            break;
        }
    }
    return daysOfWeek[(index + numDays) % 7];
}