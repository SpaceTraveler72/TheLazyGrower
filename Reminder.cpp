#include "Reminder.hpp"
#pragma once

Reminder::Reminder() {
    day = 0;
    minutes = 0;
}

Reminder::Reminder(int day, int minutes) {
    this->day = day;
    this->minutes = minutes;
}

Reminder::Reminder(int day, int hour, int minutes) {
    this->day = day;
    this->minutes = hour * 60 + minutes;
}

std::string Reminder::getDayString() {
    switch (day) {
    case 1:
        return "Sunday";
        break;

    case 2:
        return "Monday";
        break;

    case 3:
        return "Tuesday";
        break;

    case 4:
        return "Wednesday";
        break;

    case 5:
        return "Thursday";
        break;

    case 6:
        return "Friday";
        break;

    case 7:
        return "Saturday";
        break;

    default:
        return"";
        break;
    }
}

int Reminder::getDay() {
    return day;
}

int Reminder::getHour() {
    return (minutes - getReducedMinutes()) / 60;
}

int Reminder::getReducedMinutes() {
    return minutes % 60;
}

int Reminder::getMinutes() {
    return minutes;
}

bool Reminder::isEqual(Reminder other) {
    return (getDay() == other.getDay() && other.getMinutes() == getMinutes());
}
