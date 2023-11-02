//
// Created by Kamal Ghimire on 10/13/23.
//

#include "Counter.h"
#include<thread>
#include<mutex>

Counter &Counter::getInstance() {
    static Counter instance;
    return instance;
}
//incrementCounter function definition
void Counter::incrementCounter() {
    static std::mutex mutex_;
    counter_ ++;
    notify(counter_);
    //for threadsafe
    std::lock_guard<std::mutex> lock(mutex_);
    std::this_thread::sleep_for(std::chrono::milliseconds(10));

}

int Counter::get() const {
    return counter_;
}

