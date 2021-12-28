//
// Created by Jairo Riaño on 24/11/21.
//

#ifndef LISTCIRCLED_LINKCIRCLED_H
#define LISTCIRCLED_LINKCIRCLED_H

#include <vector>
#include <string>
#include "Node.h"

template <class T>
class LinkCircled {
public:
    LinkCircled();
    bool isEmpty();
    void addNodeFirst(T);
    void addNodeLast(T);
    void addNodeBeforeTo(Node<T>*, T);
    void addNodeAfterTo(Node<T>*, T);
    void addNodeSorted(T);
    std::vector<T> getLinked();
    std::vector<T> roamLinked(Node<T>*);
    Node<T>* findNode(std::string);
    T* findInfo(std::string);

    virtual ~LinkCircled();

private:
    Node<T>* head;
};

#endif //LISTCIRCLED_LINKCIRCLED_H
