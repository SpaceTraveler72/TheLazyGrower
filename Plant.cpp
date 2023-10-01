#include "Plant.hpp"   //header file
#include "Reminder.hpp"
#include "Schedule.hpp"
#include <iostream>

using namespace std;


Plant::Plant(string name, string type) {
    this->name = name;
    this->type = type;
}

/*
void Plant::sortSchedules() {
    sunlightSchedule.sortSchedule();
    waterSchedule.sortSchedule();
}*/

void Plant::printSchedules() {
    cout << "Sunlight Schedule: ";
    sunlightSchedule.printSchedule();
    cout << "Water Schedule: ";
    waterSchedule.printSchedule();
}
