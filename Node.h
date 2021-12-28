//
// Created by Jairo Riaño on 24/11/21.
//

#ifndef LISTCIRCLED_NODE_H
#define LISTCIRCLED_NODE_H
#include <cstdlib>

template <class T> class LinkCircled;

template <class T>
class Node {

    friend class LinkCircled<T>;
public:
    Node() {}

    Node(T info) : info(info) {
        next = NULL;
    }

private:
    T info;
    Node<T>* next;
};


#endif //LISTCIRCLED_NODE_H
