#include <iostream>
#include <vector>
#include "Reminder.cpp"

const int SIZE = 40;

class Schedule {

private:
    Reminder reminderArray[SIZE];
    int length;

public:
    Schedule();

    void setupDailySchedule();

    void sortArray();

    void getSchedule(Reminder& array, int& getLength);
};