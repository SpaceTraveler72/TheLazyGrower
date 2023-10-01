#ifndef ARRAY_LIST_HPP
#define ARRAY_LIST_HPP

#include "Reminder.hpp"

class ArrayList {
    Reminder* array;
    int length;

public:
    ArrayList();

    void add(Reminder data);

    //void add(ArrayList other);

    //void remove(Reminder data);

    void print();

    //void swapValue(Reminder oldData, Reminder newData);

    //Reminder getValue(int index);

    //void sortList();
};

#endif