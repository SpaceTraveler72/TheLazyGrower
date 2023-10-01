#include "ArrayList.hpp"
#include <iostream>

using namespace std;

ArrayList::ArrayList() {
    array = nullptr;
    length = 0;
}

void ArrayList::add(Reminder data) {
    length++;
    Reminder* tempArray = new Reminder[length - 1];
    for (int i = 0; i < length - 1; i++) {
        tempArray[i] = array[length];
    }

    array = new Reminder[length];

    for (int i = 0; i < length - 1; i++) {
        array[i];
    }
    array[length - 1] = data;
}

void ArrayList::print() {
    for (int i = 0; i < length; i++) {
        cout << array[i].getDayString() << " " << array[i].getHour() << ":" << array[i].getReducedMinutes() << endl;
    }
}

