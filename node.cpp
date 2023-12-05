#include "Node.h"


template<typename T>
Node<T>::Node() : next(nullptr), prev(nullptr) {}

template<typename T>
Node<T>::Node(const T& entry) : data(entry), next(nullptr), prev(nullptr) {}

template<typename T>
const T& Node<T>::getEntry() const {
    return data;
}

template<typename T>
void Node<T>::setEntry(const T& entry) {
    this->data = entry;
}

template<typename T>
Node<T>* Node<T>::getNext() const {
    return next;
}

template<typename T>
void Node<T>::setNext(Node<T>* n) {
    next = n;
}

template<typename T>
Node<T>* Node<T>::getPrev() const {
    return prev;
}

template<typename T>
void Node<T>::setPrev(Node<T>* p) {
    prev = p;
}

// todo test overload functions


// member functions
template<typename T>
bool Node<T>::operator==(const Node<T>& other) const {
    return this->data == other.data;
}

template<typename T>
bool Node<T>::operator!=(const Node& other) const {
    return data != other.data;
}

template<typename T>
bool Node<T>::operator>(const Node& other) const {
    return data > other.data;
}

template<typename T>
bool Node<T>::operator<(const Node& other) const {
    return data < other.data;
}

template<typename T>
bool Node<T>::operator>=(const Node& other) const {
    return data >= other.data;
}

template<typename T>
bool Node<T>::operator<=(const Node& other) const {
    return data <= other.data;
}

template<typename T>
bool Node<T>::operator==(const T& rhs) const {
    return data == rhs;
}

template<typename T>
bool Node<T>::operator!=(const T& rhs) const {
    return data != rhs;
}

template<typename T>
bool Node<T>::operator>(const T& rhs) const {
    return data > rhs;
}

template<typename T>
bool Node<T>::operator<(const T& rhs) const {
    return data < rhs;
}

template<typename T>
bool Node<T>::operator>=(const T& rhs) const {
    return data >= rhs;
}

template<typename T>
bool Node<T>::operator<=(const T& rhs) const {
    return data <= rhs;
}

// Definitions of non-member functions
template<typename T>
bool operator==(const T& lhs, const Node<T>& rhs) {
    return lhs == rhs.getEntry();
}

template<typename T>
bool operator!=(const T& lhs, const Node<T>& rhs) {
    return lhs != rhs.getEntry();
}

template<typename T>
bool operator>(const T& lhs, const Node<T>& rhs) {
    return lhs > rhs.getEntry();
}

template<typename T>
bool operator<(const T& lhs, const Node<T>& rhs) {
    return lhs < rhs.getEntry();
}

template<typename T>
bool operator>=(const T& lhs, const Node<T>& rhs) {
    return lhs >= rhs.getEntry();
}


template<typename T>
bool operator<=(const T& lhs, const Node<T>& rhs) {
    return lhs <= rhs.getEntry();
}
