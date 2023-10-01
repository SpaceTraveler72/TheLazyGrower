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

    std::string getDayString();

    int getDay();

    int getHour();

    int getReducedMinutes();

    int getMinutes();

    bool isEqual(Reminder other);
};

#endif