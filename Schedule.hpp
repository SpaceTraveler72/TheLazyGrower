#ifndef SCHEDULE_HPP
#define SCHEDULE_HPP

#include <iostream>
#include "ArrayList.hpp"

class Schedule {

private:
    ArrayList m_reminderArray;

public:

    Schedule();

    //void sortSchedule() { m_reminderArray.mergeSort(); }

    void setupDailySchedule(int hours, int minutes);

    void setupSchedule(Reminder reminders[], int length);

    void copySchedule(ArrayList other);

    void printSchedule() { m_reminderArray.print(); }
};

#endif