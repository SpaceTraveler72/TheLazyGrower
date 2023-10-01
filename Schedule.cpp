#include "Schedule.hpp"

Schedule::Schedule() {}

void Schedule::setupDailySchedule(int hours, int minutes) {
    for (int i = 0; i < 7; i++) {
        Reminder temp(i, hours, minutes);
        m_reminderArray.addNode(temp);
    }
}

void Schedule::setupSchedule(Reminder reminders[], int length) {
    for (int i = 0; i < length; i++) {
        m_reminderArray.addNode(reminders[i]);
    }
}

void Schedule::copySchedule(LinkedList other) {
    other.addLinkedList(m_reminderArray);
}


