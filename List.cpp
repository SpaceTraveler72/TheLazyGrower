#include "List.h"   //header file
#include <iostream>
#include <iomanip>
using namespace std;

/********************************************************************
*** FUNCTION List::List                                           ***
*********************************************************************
*** DESCRIPTION : This is the constructor for the List class.     ***
                  It initializes the head pointer to NULL.        ***
*** INPUT ARGS : None                                             ***
*** OUTPUT ARGS : None                                            ***
*** IN/OUT ARGS : None                                            ***
*** RETURN : None                                                 ***
********************************************************************/
List::List() {
    head = nullptr;
}


/**********************************************************************
 * *** FUNCTION List::List(const List &other)                       ***
***********************************************************************
*** DESCRIPTION : Constructor for the List class that creates a new ***
                  List object as a copy  of another List object.    ***
                  It initializes the front pointer to null and then ***
                  iterates through the other List object, adding    ***
                  each element to the new List object.              ***
*** INPUT ARGS : other (const List&) - the List object to be copied ***
*** OUTPUT ARGS : None                                              ***
*** IN/OUT ARGS : None                                              ***
*** RETURN : None                                                   ***
***********************************************************************/
List::List(const List& other) {
    head = nullptr;
    Nodeptr current = other.head;
    while (current != nullptr) {
        add(current->value);
        current = current->next;
    }
}

/********************************************************************
*** FUNCTION List::~List                                          ***
*********************************************************************
*** DESCRIPTION : This is the destructor for the List class.      ***
***               It deallocates all the nodes in the linked list.***
*** INPUT ARGS : None                                             ***
*** OUTPUT ARGS : None                                            ***
*** IN/OUT ARGS : None                                            ***
*** RETURN : None                                                 ***
********************************************************************/
/*List::~List() {
    while (head != nullptr) {
        Nodeptr temp = head;
        head = head->next;
        delete temp;
    }
}


/********************************************************************
*** FUNCTION List::insert                                         ***
*********************************************************************
*** DESCRIPTION : This function inserts a new node with the give  ***
*** INPUT ARGS : element (float) - the value to be inserted       ***
*** OUTPUT ARGS : None                                            ***
*** IN/OUT ARGS : None                                            ***
*** RETURN : None                                                 ***
********************************************************************/
void List::add(const Element num) {
    Nodeptr newNode;
    Nodeptr nodePtr;
    Nodeptr previousNode = nullptr;

    newNode = new Node;
    newNode->value = num;

    if (!head) {
        head = newNode;
        newNode->next = nullptr;
        cout << "Value was added" << endl;
    }
    else {
        nodePtr = head;

        previousNode = nullptr;

        while (nodePtr != nullptr && nodePtr->value < num) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if (previousNode == nullptr) {
            head = newNode;
            newNode->next = nodePtr;
            cout << "Value was added" << endl;
        }
        else {
            previousNode->next = newNode;
            newNode->next = nodePtr;
            cout << "Value was added" << endl;
        }
    }
}


/********************************************************************
*** FUNCTION List::remove                                         ***
*********************************************************************
*** DESCRIPTION : This function removes the node in the           ***
                  linked list with the given value.               ***
*** INPUT ARGS : element (float) - the value to be removed        ***
*** OUTPUT ARGS : None                                            ***
*** IN/OUT ARGS : None                                            ***
*** RETURN : None                                                 ***
********************************************************************/
void List::remove(const Element num) {
    Nodeptr nodePtr;
    Nodeptr previousNode;


    if (!head) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->value == num) {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
        cout << "Value was removed from list" << endl;
    }
    else {

        nodePtr = head;

        while (nodePtr != nullptr && nodePtr->value != num) {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }

        if (nodePtr) {
            previousNode->next = nodePtr->next;
            delete nodePtr;
            cout << "Value was removed from list" << endl;
        }
        else {
            cout << "Value was not found" << endl;
        }

    }
}

/********************************************************************
*** FUNCTION List::view                                           ***
*********************************************************************
*** DESCRIPTION : This function displays the values               ***
                  of the linked list.                             ***
*** INPUT ARGS : None                                             ***
*** OUTPUT ARGS : None                                            ***
*** IN/OUT ARGS : None                                            ***
*** RETURN : None                                                 ***
********************************************************************/
void List::view() const {
    Nodeptr current = head;
    cout << "FRONT -> ";
    while (current != nullptr) {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "END";
    cout << endl;
}