#ifndef INC_340DOUBLYLINKEDLIST_NODE_H
#define INC_340DOUBLYLINKEDLIST_NODE_H


//#include <string>

// declared node with public and private elements.
template<typename T>
class Node {
private:
    T data;
    Node* next;
    Node* prev;

public:
    Node();
    Node(const T& entry);
    const T& getEntry() const;
    void setEntry(const T& entry);
    Node* getNext() const;
    void setNext(Node* n);
    Node* getPrev() const;
    void setPrev(Node* p);


    // declaration of operators
    bool operator==(const Node<T>& other) const;
    bool operator>(const Node<T>& other) const;
    bool operator<(const Node<T>& other) const;
    bool operator>=(const Node<T>& other) const;
    bool operator<=(const Node<T>& other) const;
    bool operator!=(const Node<T>& other) const;


    bool operator==(const T& rhs) const;
    bool operator!=(const T& rhs) const;
    bool operator>(const T& rhs) const;
    bool operator<(const T& rhs) const;
    bool operator>=(const T& rhs) const;
    bool operator<=(const T& rhs) const;

   friend bool operator==(const T& lhs, const Node<T>& rhs);
   friend bool operator!=(const T& lhs, const Node<T>& rhs);
   friend bool operator>(const T& lhs, const Node<T>& rhs);
   friend bool operator<(const T& lhs, const Node<T>& rhs);
   friend bool operator>=(const T& lhs, const Node<T>& rhs);
   friend bool operator<=(const T& lhs, const Node<T>& rhs);

};





#endif