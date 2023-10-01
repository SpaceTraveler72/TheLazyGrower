#ifndef REMINDER_HPP
#define REMINDER_HPP

#include <string>

class Reminder {
    int day;
    int minutes;

public:
    Reminder(int day = 0, int hour = 0, int minutes = 0);

    int getDay() { return day; }
    int getMinutes() { return minutes; }

    std::string getDayString();
    int getHour();
    int getReducedMinutes();
    bool isEqual(Reminder other);
    int getValue();
};

#endif