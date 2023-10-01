#ifndef REMINDER_HPP
#define REMINDER_HPP

#include <string>

class Reminder {
    int day;
    int minutes;

public:
    Reminder();
    Reminder(int day, int minutes);
    Reminder(int day, int hour, int minutes);

    int getDay() { return day; }
    int getMinutes() { return minutes; }

    std::string getDayString();
    int getHour();
    int getReducedMinutes();
    bool isEqual(Reminder other);
    int getValue();
};

#endif