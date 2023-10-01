#ifndef SCHEDULE_HPP
#define SCHEDULE_HPP

#include <iostream>
#include "Reminder.cpp"
#include "LinkedList.cpp"

class Schedule {

private:
    LinkedList reminderArray;

public:

    Schedule();

    void setupDailySchedule(int hours, int minutes);

    void setupSchedule(Reminder reminders[], int length);

    void copySchedule(LinkedList other);
};

#endif