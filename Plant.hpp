// Implementation Files (.cpp)
#ifndef Plant_HPP // Guard – start
#define Plant_HPP

#include <string>
#include "Schedule.hpp"

using namespace std;

class Plant {
    string name;
    string type;
    Schedule sunlightSchedule;
    Schedule waterSchedule;

public:
    Plant(string name = "", string type = ""); // constructor
    void setName(string n) { name = n; }
    void setType(string t) { type = t; }
    string getName() { return name; }
    string getType() { return type; }
    void setupDailyWaterSchedule(int hours, int minutes);
    void setupDailySunlightSchedule(int hours, int minutes);
    //void sortSchedules();
    void printSchedules();

};

#endif // Guard – end
