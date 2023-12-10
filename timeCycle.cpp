//
// Created by Elias Magdaleno on 12/2/23.
//

#include "timeCycle.h"

timeCycle::timeCycle() : start_time(std::chrono::system_clock::now()){
    current_time = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = current_time - start_time;

}

void timeCycle::setCurrentTime(const std::chrono::time_point<std::chrono::system_clock> &currentTime) {
    current_time = currentTime;
}

const std::chrono::time_point<std::chrono::system_clock> &timeCycle::getCurrentTime() const {
    return current_time;
}

bool timeCycle::checkTime() const {
    std::chrono::duration<double> elapsed_time = current_time - start_time;
    return elapsed_time >= Day;
}

void timeCycle::startTime() {
    start_time = current_time;
}

void timeCycle::updateTime() {
    current_time = std::chrono::system_clock::now();
}

void timeCycle::resetTime() {
    start_time = std::chrono::system_clock::now();
    current_time = start_time;
}

std::chrono::duration<double> timeCycle::elapsedTime() {
    return current_time - start_time;
}

void timeCycle::advanceTime(int minutes) {
    current_time += std::chrono::minutes(minutes);
}

timeCycle &timeCycle::operator=(const timeCycle &other) {
    if(this != &other){
        start_time = other.start_time;
        current_time = other.current_time;
    }
    return *this;
}
