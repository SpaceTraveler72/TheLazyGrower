#include "Plant.h"   //header file
#include <iostream>
#include <string>
#include "Reminder.cpp"

using namespace std;

void getPlant(Plant* Plant) {
    string holder;

    cout << "What would you like to name the plant: ";
    cin >> holder;
    Plant->setName(holder);
    cout << "What is the type of plant: ";
    cin >> holder;
    Plant->setType(holder);
}