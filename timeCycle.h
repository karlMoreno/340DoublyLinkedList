//
// Created by Elias Magdaleno on 12/2/23.
//

#ifndef INC_340DOUBLYLINKEDLIST_TIMECYCLE_H
#define INC_340DOUBLYLINKEDLIST_TIMECYCLE_H
#include <chrono>
#include <thread>


class timeCycle {
private:
    //const std::chrono::hours Day = std::chrono::hours(24);
    const std::chrono::minutes Day = std::chrono::minutes(1);
    std::chrono::time_point<std::chrono::system_clock> current_time, start_time;

public:
    timeCycle();
    void setCurrentTime(const std::chrono::time_point<std::chrono::system_clock> &currentTime);
    const std::chrono::time_point<std::chrono::system_clock> &getCurrentTime() const;

    bool checkTime() const;
    void startTime();
    void updateTime();
    void resetTime();
    std::chrono::duration<double> elapsedTime();
    void advanceTime(int minutes);

    timeCycle& operator=(const timeCycle& other);

};


#endif //INC_340DOUBLYLINKEDLIST_TIMECYCLE_H
