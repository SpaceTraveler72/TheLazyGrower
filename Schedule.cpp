#include "Schedule.hpp"

Schedule::Schedule() {}

void Schedule::setupDailySchedule(int hours, int minutes) {
    for (int i = 0; i < 7; i++) {
        Reminder temp(i, hours, minutes);
        reminderArray.add_node(temp);
    }
}

void Schedule::setupSchedule(Reminder reminders[], int length) {
    for (int i = 0; i < length; i++) {
        reminderArray.add_node(reminders[i]);
    }
}



