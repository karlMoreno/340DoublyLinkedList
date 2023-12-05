#include "LinkedList.h"
#include <iostream>
template<typename T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr), listSize(0) {}

template<typename T>
LinkedList<T>::LinkedList(const T& entry) : head(new Node<T>(entry)), tail(head), listSize(1) {}

template<typename T>
LinkedList<T>::~LinkedList() {
    Node<T>* current = head;
    while (current != nullptr) {
        Node<T>* next = current->getNext();
        delete current;
        current = next;
    }
}

// linked list push back operation
template<typename T>
void LinkedList<T>::push_back(const T& entry) {
    Node<T>* newNode = new Node<T>(entry);
    if (!head) {
        head = newNode;
        tail = newNode;
    } else {
        tail->setNext(newNode);
        newNode->setPrev(tail);
        tail = newNode;
    }
    listSize++;
}

// Nodes in linked list
template<typename T>
int LinkedList<T>::size() const {
    return listSize;
}

template<typename T>
Node<T>* LinkedList<T>::getHead() const {
    return head;
}

template<typename T>
Node<T>* LinkedList<T>::getTail() const {
    return tail;
}

template<typename T>
void LinkedList<T>::deleteEntry(Node<T>* nodeToDelete) {
    if (nodeToDelete != nullptr) {

        Node<T> *nextNode = nodeToDelete->getNext();

        if (nodeToDelete == head) {
            head = nextNode;
        }
        if (nodeToDelete == tail) {
            tail = nodeToDelete->getPrev();
        }
        if (nodeToDelete->getPrev()) {
            nodeToDelete->getPrev()->setNext(nextNode);
        }
        if (nextNode) {
            nextNode->setPrev(nodeToDelete->getPrev());
        }

        delete nodeToDelete;
        listSize--;

    }

}

template<typename T>
Node<T>* LinkedList<T>::insert_before(const T& newWord, Node<T>* knownNode) {
    Node<T>* newNode = new Node<T>(newWord);


    if (head == nullptr || knownNode == head) {
        newNode->setNext(head);
        if (head != nullptr) {
            head->setPrev(newNode);
        } else {

            tail = newNode;
        }
        head = newNode;
    } else {

        Node<T>* prevNode = (knownNode != nullptr) ? knownNode->getPrev() : tail;
        newNode->setNext(knownNode);
        newNode->setPrev(prevNode);

        if (prevNode != nullptr) {
            prevNode->setNext(newNode);
        }

        if (knownNode != nullptr) {
            knownNode->setPrev(newNode);
        } else {

            tail = newNode;
        }
    }

    listSize++;
    return newNode;
}

template<typename T>
void LinkedList<T>::clear() {
    Node<T>* current = head;
    while(current != nullptr){
        Node<T>* next = current->getNext();
        delete current;
        current = next;
    }
    head = tail = nullptr;
    listSize = 0;
}

template<typename T>
void LinkedList<T>::print() const {
    Node<T>* current = head;
    while (current != nullptr) {
        std::cout << current->getEntry() << std::endl;
        current = current->getNext();
    }
}
