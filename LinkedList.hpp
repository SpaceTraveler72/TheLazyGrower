#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <string>
#include <iostream>
#include "Reminder.cpp"

class LinkedList {
    struct node {
        Reminder data;
        node* next;
    };

    node* head;
    node* tail;

public:
    LinkedList();

    void add_node(Reminder data);

    void remove_node(Reminder data);

    void print();

    void edit_node(Reminder oldData, Reminder newData);
};

#endif