cmake_minimum_required(VERSION 3.19)
project(340DoublyLinkedList)
set(CMAKE_CXX_STANDARD 14)
set(Headers node.h LinkedList.h test.h)
add_executable(340DoublyLinkedList ${PROJECT_SOURCE_DIR}/main.cpp node.h node.cpp LinkedList.cpp LinkedList.h test.cpp test.h)

