//
// Created by Jairo Riaño on 24/11/21.
//

#include "LinkCircled.h"

template<class T>
LinkCircled<T>::LinkCircled() {
    head = NULL;
}

template<class T>
bool LinkCircled<T>::isEmpty() {
    return head == NULL;
}

template<class T>
void LinkCircled<T>::addNodeFirst(T info) {
    Node<T> *node = new Node<T>(info);
    if(isEmpty()){
        head = node;
        head->next = head;
    }else{
        node->next = head->next;
        head->next = node;
    }
}

template<class T>
void LinkCircled<T>::addNodeLast(T info) {
    Node<T> *node = new Node<T>(info);
    if(isEmpty()){
        head = node;
        head->next = head;
    }else{
       node->next = head->next;
       head->next = node;
       head = node;
    }
}

template<class T>
void LinkCircled<T>::addNodeBeforeTo(Node<T> *before, T info) {
    Node<T> *node = new Node<T>(info);
    Node<T> *aux = head;
    while( aux->next != before ){
        aux = aux->next;
    }
    node->next = aux->next;
    aux->next = node;
}

template<class T>
void LinkCircled<T>::addNodeAfterTo(Node<T> *after, T info) {
    Node<T> *node = new Node<T>(info);
    if( after == head ){
        addNodeLast( info );
    }else{
        Node<T> *aux = head;
        while( aux != after ){
            aux = aux->next;
        }
        node->next = aux->next;
        aux->next = node;
    }
}

template<class T>
void LinkCircled<T>::addNodeSorted(T) {

}

template<class T>
std::vector<T> LinkCircled<T>::getLinked() {
    std::vector<T> out;
    Node<T>* aux = head;
    do{
        out.push_back( aux->next->info );
        aux = aux->next;
    }while( aux != head );

    return out;
}

template<class T>
std::vector<T> LinkCircled<T>::roamLinked(Node<T> *node) {
    std::vector<T> out;
    Node<T> *aux = node;
    do{
        out.push_back( aux->info );
        aux = aux->next;
    }while( aux != node );

    return out;
}

template<class T>
T *LinkCircled<T>::findInfo(std::string id) {

}

template<class T>
Node<T> *LinkCircled<T>::findNode(std::string id) {
    Node<T> *aux = head;
    do{
        if ( aux->info.getId().compare( id ) == 0 ){
            return aux;
        }

        aux = aux->next;
    }while( aux != head );

    return NULL;
}

template<class T>
LinkCircled<T>::~LinkCircled() {
    Node<T> *aux = NULL;
    do {
        aux = head->next;
        head = head->next;
        delete (aux);
    } while (aux != head);
}
