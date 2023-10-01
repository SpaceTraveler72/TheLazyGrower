#include "LinkedList.hpp"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::add_node(Reminder data) {
    node* new_node = new node();
    new_node->data = data;
    new_node->next = nullptr;

    if (head == nullptr) {
        head = new_node;
        head->next = tail;
        return;
    }

    tail->next = new_node;
    tail = new_node;
}

void LinkedList::remove_node(Reminder data) {
    if (!head) return;

    node* new_node;
    node* previousNode;

    if (head->data.isEqual(data)) {
        new_node = head->next;
        delete head;
        head = new_node;
        return;
    }
    new_node = head;

    while (new_node != nullptr && new_node->data.isEqual(data)) {
        previousNode = new_node;
        new_node = new_node->next;
    }

    if (new_node) {
        previousNode->next = new_node->next;
        delete new_node;
    }
}



void LinkedList::print() {
    node* current = head;
    while (current != nullptr) {
        std::cout << current->data.getDay() << " ";
        current = current->next;
    }
    std::cout << std::endl;
}


void LinkedList::edit_node(Reminder oldData, Reminder newData) {
    if (!head) return;

    node* new_node;

    if (head->data.isEqual(oldData)) {
        head->data = newData;
        return;
    }

    new_node = head;

    while (new_node != nullptr && new_node->data.isEqual(oldData)) {
        new_node = new_node->next;
    }

    new_node->data = newData;
}

