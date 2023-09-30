// Implementation Files (.cpp)
#ifndef _LIST_H // Guard – start
#define _LIST_H

#include <string>

typedef std::string Element; // typedef <existing type> <new type>
// basic form of generic programming

class List {
public: // exportable
    // General description of each of the ADT operations/methods/functions – exportable operations only
    List(); // constructor
    List(const List&); // copy constructor
    ~List(); // destructor
    void add(const Element); // add an element to the list
    void remove(const Element);  // remove an element from the list
    void view() const;  // view the list


private: // non-exportable
    // No private member documentation – implementation details are hidden/abstracted away
    struct Node;
    typedef Node* Nodeptr;

    struct Node {
        Element value;
        Nodeptr next;
    };

    Nodeptr head;
};

#endif // Guard – end