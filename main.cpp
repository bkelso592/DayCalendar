#include <iostream>
#include "dayType.h"
using namespace std;

int main() {
    // 1. Create a day object using the default constructor and use the print function to display the instance variable. The output should be “Sunday”.
    cout << "From default constructor: ";
    dayType day1;
    day1.print();

    // 2. Display the previous day (output should be “Saturday”).
    cout << "Previous day: " << day1.getPrevDay() << endl;

    // 3. Display the next day (output should be “Monday”).
    cout << "Next Day: " << day1.getNextDay() << endl;

    // 4. Create a day object using the constructor with parameters and initialize the object to “Monday”.
    cout << "From constructor with parameters: ";
    dayType day2("Monday");
    day2.print();

    // 5. Use get function to display the value of the instance variable (should be “Monday”).
    cout << "Using get function: " << day2.getDay() << endl;

    // 6. Using the second object, add 3 days to the current day and display the new day value (should be “Thursday”).
    cout << "After adding 3 days: " << day2.addDays(3) << endl;

    // 7. Use the second object to call add 30 days to the current day and display the new day value (should be “Saturday”).
    cout << "After adding 30 days: " << day2.addDays(30) << endl;

    // 8. Use the second object to add 365 days to the current day and display the new day value (should be “Sunday”).
    cout << "After adding 365 days: " << day2.addDays(365) << endl;

    return 0;
}