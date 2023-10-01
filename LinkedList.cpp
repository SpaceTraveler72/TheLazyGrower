#include "LinkedList.hpp"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::addNode(Reminder data) {
    Node* new_node = new Node();
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

void LinkedList::removeNode(Reminder data) {
    if (!head) return;

    Node* new_node;
    Node* previousNode;

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
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data.getDayString() << " " << current->data.getHour() << ":" << current->data.getReducedMinutes() << std::endl;
        current = current->next;
    }
    std::cout << std::endl;
}

void LinkedList::editNode(Reminder oldData, Reminder newData) {
    if (!head) return;

    Node* new_node;

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

void LinkedList::addLinkedList(LinkedList other) {
    if (!other.head) return;
    Node* new_node = other.head;

    while (new_node != nullptr) {
        addNode(new_node->data);
        new_node = new_node->next;
    }
}
/*
LinkedList::Node* LinkedList::mergeSortedList(Node* list1, Node* list2) {
    // a result pointer that will point the merged list.
    Node* result = NULL;

    // handling the base cases
    if (list1 == NULL)
        return (list2);
    else if (list2 == NULL)
        return (list1);

    // recursively merging two sorted lists
    if (list1->data.getValue() <= list2->data.getValue()) {
        result = list1;
        result->next = mergeSortedList(list1->next, list2);
    }
    else {
        result = list2;
        result->next = mergeSortedList(list1, list2->next);
    }

    // returning the merged sorted list.
    return result;
}

// Splitting the linked list into halves.
void LinkedList::splitListIntoHalves(Node* source, Node** front, Node** back) {
    Node* pointer1;
    Node* pointer2;
    pointer2 = source;
    pointer1 = source->next;

    // we will use the two pointer technique to get the halves of the original linked list.
    while (pointer1 != NULL) {
        pointer1 = pointer1->next;
        if (pointer1 != NULL) {
            pointer2 = pointer2->next;
            pointer1 = pointer1->next;
        }
    }

    // pointer2 will point at the mid point.
    *front = source;
    *back = pointer2->next;
    pointer2->next = NULL;
}

// a function that will sort the linked list.
void LinkedList::mergeSort() {
    Node* tempHead = head;
    Node* pointer1;
    Node* pointer2;

    // handling the base cases.
    if ((tempHead == NULL) || (tempHead->next == NULL))
        return;

    // Splitting linked list into smaller halves.
    splitListIntoHalves(tempHead, &pointer1, &pointer2);

    // Recursively sorting the divided linked list.
    mergeSort(&pointer1);
    mergeSort(&pointer2);

    // let the head pointer now point to the sorted linked list.
    *tempHead = mergeSortedList(pointer1, pointer2);
}
*/
