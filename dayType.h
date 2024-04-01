#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>
using namespace std;

class dayType {
private:
    string day;
public:
    dayType(); // Default constructor
    dayType(const string&); // Constructor with parameters
    void print();
    string getNextDay();
    string getPrevDay();
    string getDay();
    string addDays(int);
};

#endif // DAYTYPE_H