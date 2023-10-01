#include "Plant.hpp"
#include <iostream>
#include <string>

using namespace std;

void addPlant(Plant);

int main() {
    Plant plant1;

    addPlant(plant1);

    plant1.printSchedules();
}

void addPlant(Plant plant) {
    string holder;
    int hourHolder, minHolder;
    cout << "Enter the name of the plant: ";
    cin >> holder;
    plant.setName(holder);
    cout << "Enter the type of plant: ";
    cin >> holder;
    plant.setType(holder);
    cout << "Enter what hour you would like the reminder for water: ";
    cin >> hourHolder;
    cout << "Enter the number of minutes after the hour for the reminder for water: ";
    cin >> minHolder;
    plant.setupDailyWaterSchedule(hourHolder, minHolder);
    cout << "Enter what hour you would like the reminder for sunlight: ";
    cin >> hourHolder;
    cout << "Enter the number of minutes after the hour for the reminder for sunlight: ";
    cin >> minHolder;
    plant.setupDailySunlightSchedule(hourHolder, minHolder);
}