// Implementation Files (.cpp)
#ifndef Plant_HPP // Guard – start
#define Plant_HPP

#include <string>

using namespace std;

class Plant {
    string name;
    string type;

public:
    Plant(string name = "", string type = ""); // constructor
    void setName(string n) { name = n; }
    void setType(string t) { type = t; }
    string getName() { return name; }
    string getType() { return type; }
};

#endif // Guard – end
