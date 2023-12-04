//
// Created by Subhan Khan on 12/2/23.
//

#ifndef INC_340DOUBLYLINKEDLIST_LINKEDLIST_H
#define INC_340DOUBLYLINKEDLIST_LINKEDLIST_H


#include "node.h"
#include <string>

//declared linkedlist class and added private and public elements.
template<typename T>
class LinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int listSize;

public:
    LinkedList();
    explicit LinkedList(const T& data);
    ~LinkedList();
    void push_back(const T& data);
    Node<T>* insert_before(const T& newData, Node<T>* knownNode);
    int size() const;
    Node<T>* getHead() const;
    Node<T>* getTail() const;
    Node<T>* deleteEntry(Node<T>* nodeToDelete);
    void print() const;
};

#endif
