cmake_minimum_required(VERSION 3.19)
project(340DoublyLinkedList)
set(CMAKE_CXX_STANDARD 14)
set(Headers node.h LinkedList.h tests/test.h)
include_directories(.)
add_executable(340DoublyLinkedList ${PROJECT_SOURCE_DIR}/main.cpp node.h node.cpp LinkedList.cpp LinkedList.h tests/test.cpp tests/test.h
        timeCycle.cpp
        timeCycle.h
        destination.cpp
        destination.h
        elevator.cpp
        elevator.h
        floor.cpp
        floor.h
        person/person.cpp
        person/person.h
        room.cpp
        tests/elevatorTest.cpp
        tests/elevatorTest.h
)

