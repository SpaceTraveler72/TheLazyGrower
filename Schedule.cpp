#include "Schedule.hpp"

Schedule::Schedule() {}

void Schedule::setupDailySchedule(int hours, int minutes) {
    for (int i = 1; i <= 7; i++) {
        Reminder temp(i, hours, minutes);
        m_reminderArray.add(temp);
    }
}

void Schedule::setupSchedule(Reminder reminders[], int length) {
    for (int i = 0; i < length; i++) {
        m_reminderArray.add(reminders[i]);
    }
}

void Schedule::copySchedule(ArrayList other) {
    //other.add(m_reminderArray);
}


