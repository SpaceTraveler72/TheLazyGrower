// Implementation Files (.cpp)
#ifndef _Plant_H // Guard – start
#define _Plant_H

#include <string>

class Plant {
public: // exportable
    // General description of each of the ADT operations/methods/functions – exportable operations only
    Plant(); // constructor
    ~Plant(); // destructor
    void setName(string n) {
        name = n;
    }
    void setType(string t) {
        type = t;
    }
    string getName() {
        return name;
    }
    string getType() {
        return type;
    }




private: // non-exportable
    string name;
    string type;
};
#endif // Guard – end
