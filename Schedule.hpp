#ifndef SCHEDULE_HPP
#define SCHEDULE_HPP

#include <iostream>
#include "Reminder.hpp"
#include "LinkedList.hpp"

class Schedule {

private:
    LinkedList m_reminderArray;

public:

    Schedule();

    //void sortSchedule() { m_reminderArray.mergeSort(); }

    void setupDailySchedule(int hours, int minutes);

    void setupSchedule(Reminder reminders[], int length);

    void copySchedule(LinkedList other);

    void printSchedule() { m_reminderArray.print(); }
};

#endif