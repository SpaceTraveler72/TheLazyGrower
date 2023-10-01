#include "Reminder.hpp"

Reminder::Reminder() {
    day = 0;
    minutes = 0;
}

Reminder::Reminder(int day, int minute) {
    this->day = day;
    this->minutes = minutes;
}

Reminder::Reminder(int days = 0, int hours = 0, int minutes = 0) {
    this->day = days;
    this->minutes = hours * 60 + minutes;
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


int Reminder::getHour() {
    return (minutes - getReducedMinutes()) / 60;
}

int Reminder::getReducedMinutes() {
    return minutes % 60;
}

bool Reminder::isEqual(Reminder other) {
    return (getDay() == other.getDay() && other.getMinutes() == getMinutes());
}

int Reminder::getValue() {
    return day * 24 * 60 + minutes;
}

