#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include <string>
#include <iostream>
#include "Reminder.cpp"

class LinkedList {
    struct Node {
        Reminder data;
        Node* next;
    };

    Node* head;
    Node* tail;

public:
    LinkedList();

    void addNode(Reminder data);

    void removeNode(Reminder data);

    void print();

    void editNode(Reminder oldData, Reminder newData);

    void addLinkedList(LinkedList other);
    /*
        Node* mergeSortedList(Node* list1, Node* list2);

        void splitListIntoHalves(Node* source, Node** front, Node** back);

        void mergeSort();

        void mergeSort(Node** node);*/
};

#endif